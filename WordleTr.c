﻿#include<stdio.h>
#include<locale>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
void toUpper(char dizi[])
{
	int i,j;
	char dizibuyuk[]="ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZ";
	char dizikucuk[]="abcçdefgğhıijklmnoöprsştuüvyz";
	for(i=0;dizi[i]!='\0';i++)
	{
		for(j=0;j<29;j++)
		{
			if(dizi[i]==dizikucuk[j])
			{
				dizi[i]=dizibuyuk[j];
			}
		}
	}
}
void diziduzenleme(char dza[][6]);
void fark(char dz[][6],int r) //Harfleri farklı rastgele bir kelime
{
	int i,j,k,x=0,z,c=0;
	int dzr[3035][6];
	for(i=0;i<5183;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=j+1;k<5;k++)
			{
				dz[i][k]==dz[i][j] ? x=0:x=1;
				if(x==0)
				{
					break;
				}
			}
			if(x==0)
			{
				break;
			}
		}
		if(x==1)
		{
			for(z=0;z<5;z++)
			{
				dzr[c][z]=dz[i][z];
			}
			c++;
		}
	}
	if(x==1)
		{
			for(z=0;z<5;z++)
			{
				printf("%c",dzr[r][z]);
			}
			printf("\n");
		}
}
void harfiBilinenKelime(char dz[][6],char dzy[],int dzys[],int yhsayi,int b)     //Yeşil Harf
{
	int x=0,i,j,a,c=0;
	char harf;
	
	while(x<yhsayi)
	{
		harf=dzy[b];
		a=(dzys[b])-1;
		for(i=0;i<5183;i++)
		{
			if(dz[i][a]!=harf)
			{
				dz[i][0]=' ';
				dz[i][1]=' ';
				dz[i][2]=' ';
				dz[i][3]=' ';
				dz[i][4]=' ';
			}
			
		}
		diziduzenleme(dz);
		x++;
		b++;
	}
}
void harfiOlmayanKelime(char dz[][6],char dz1[],int length)   //Siyah Harf
{
	int i,j,k,x,z;
	for(i=0;i<5183;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<length;k++)
			{
				if(dz1[k]==dz[i][j])           
				{
					dz[i][0]=' ';
					dz[i][1]=' ';
					dz[i][2]=' ';
					dz[i][3]=' ';
					dz[i][4]=' ';
					x=0;
					break;
				}
				else
				{
					x=1;
				}
			}
			if(x==0)
			{
				break;
			}
		}
	}
	diziduzenleme(dz);
}
void yeribilinmiyenharf(char dz[][6],char dz1[],int konum[],int sarih,int saris) //Sarı Harf
{
	int i,j,k,f=saris,x=0,a=0,z;
	while(a<sarih)
	{
		for(i=0;i<strlen(dz1);i++)
		{
			switch(konum[i])
			{
				case 1:
				{
					for(j=0;j<5183;j++)
					{
						for(k=0;k<5;k++)
						{
							if((dz[j][0]!=dz1[i])&&(dz[j][1]==dz1[i] || dz[j][2]==dz1[i] || dz[j][3]==dz1[i]  || dz[j][4]==dz1[i]))
							{
								z=1;
								break;
							}
							else
							{
								z=0;
								break;
							}
						}
						if(z==0)
							{
								dz[j][0]=' ';
								dz[j][1]=' ';
								dz[j][2]=' ';
								dz[j][3]=' ';
								dz[j][4]=' ';
							}
					}
				}break;
				
				case 2:
				{
					for(j=0;j<5183;j++)
					{
						for(k=0;k<5;k++)
						{
							if((dz[j][1]!=dz1[i])&&(dz[j][0]==dz1[i] || dz[j][2]==dz1[i] || dz[j][3]==dz1[i]  || dz[j][4]==dz1[i]))
							{
								z=1;
								break;
							}
							else
							{
								z=0;
								break;
							}
						}
						if(z==0)
							{
								dz[j][0]=' ';
								dz[j][1]=' ';
								dz[j][2]=' ';
								dz[j][3]=' ';
								dz[j][4]=' ';
							}
					}
				}break;
				
				case 3:
				{
					for(j=0;j<5183;j++)
					{
						for(k=0;k<5;k++)
						{
							if((dz[j][2]!=dz1[i])&&(dz[j][0]==dz1[i] || dz[j][1]==dz1[i] || dz[j][3]==dz1[i]  || dz[j][4]==dz1[i]))
							{
							z=1;
								break;
							}
							else
							{
								z=0;
								break;
							}
						}
						if(z==0)
							{
								dz[j][0]=' ';
								dz[j][1]=' ';
								dz[j][2]=' ';
								dz[j][3]=' ';
								dz[j][4]=' ';
							}
					}
				}break;
				
				case 4:
				{
					for(j=0;j<5183;j++)
					{
						for(k=0;k<5;k++)
						{
							if((dz[j][3]!=dz1[i])&&(dz[j][0]==dz1[i] || dz[j][1]==dz1[i] || dz[j][2]==dz1[i]  || dz[j][4]==dz1[i]))
							{
							z=1;
								break;
							}
							else
							{
								z=0;
								break;
							}
						}
						if(z==0)
							{
								dz[j][0]=' ';
								dz[j][1]=' ';
								dz[j][2]=' ';
								dz[j][3]=' ';
								dz[j][4]=' ';
							}
					}
				}break;
				
				case 5:
				{
					for(j=0;j<5183;j++)
					{
						for(k=0;k<5;k++)
						{
							if((dz[j][4]!=dz1[i])&&(dz[j][0]==dz1[i] || dz[j][1]==dz1[i] || dz[j][2]==dz1[i]  || dz[j][3]==dz1[i]))
							{
							z=1;
								break;
							}
							else
							{
								z=0;
								break;
							}
						}
						if(z==0)
							{
								dz[j][0]=' ';
								dz[j][1]=' ';
								dz[j][2]=' ';
								dz[j][3]=' ';
								dz[j][4]=' ';
							}
					}
				}break;
			}
			diziduzenleme(dz);
		}
		a++;
	}
}
void dizisil(char dz[])
{
	for(int i=0;dz[i]!='\0';i++)
	{
		dz[i]=' ';
	}
}
void diziduzenleme(char dza[][6])
{
	int i,j=0,a=0;
	char dizidegisken[5183][6];
	for(i=0;i<5183;i++)
	{
		if(dza[i][0]!=' ')
		{
			for(j=0;j<5;j++)
			{
				dizidegisken[a][j]=dza[i][j];
				
			}
			a++;
		}
	}
	for(i=0;i<5183;i++)
	{
		for(j=0;j<5;j++)
		{
			dza[i][j]=' ';
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<5;j++)
		{
			dza[i][j]=dizidegisken[i][j];
		}
	}
}
void siyah2(char dz[][6],char dz1[],int length,int indis,int sis2)   //Siyah Harf
{
	printf("dz1: %c\n",dz1[0]);
	printf("length: %d\n",length);
	printf("indis: %d\n",indis);
	int i,j,k=0,x,z;
	for(i=0;i<5183;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==(indis-1))
				j++;	
			for(k=sis2;k<length;k++)
			{
				if(dz1[k]==dz[i][j])           
				{
					dz[i][0]=' ';
					dz[i][1]=' ';
					dz[i][2]=' ';
					dz[i][3]=' ';
					dz[i][4]=' ';
					x=0;
					break;
				}
				else
				{
					x=1;
				}
			}
			if(x==0)
			{
				break;
			}
		}
	}
	diziduzenleme(dz);
}

int main()
{
	int i,j,a=0,b,c,k,d=1,x=0,y,z,yok=0,f,toplam=0,yesilharfsayisi2=0;
	setlocale(LC_ALL, "Turkish");
	system("color 2");
	system("START https://www.bundle.app/wordle-tr/");
	srand(time(NULL));
	char dizi[5183][6] = { "ABACI","ABADİ","ABALI","ABANA","ABANİ","ABAŞO","ABAZA","ABBAS","ABDAL","ABECE","ABHAZ","ABİDE",
	"ABİYE","ABLAK","ABONE","ABOSA","ABRAŞ","ABULİ","ACABA","ACARA","ACELE","ACEMİ","ACEZE","ACICA","ACILI","ACIMA","ACİBE",
	"ACUBE","ACUZE","AÇGÖZ","AÇLIK","AÇMAK","AÇMAZ","ADALE","ADALI","ADAMA","ADANA","ADEDİ","ADESE","ADETA","ADINA","ADRES",
	"ADSAL","ADSIZ","AFAKİ","AFAZİ","AFGAN","AFİFE","AFİLİ","AFİŞE","AFONİ","AFSUN","AFŞAR","AFŞİN","AFTOS","AFYON","AGAMİ",
	"AGORA","AGRAF","AĞCIK","AĞILI","AĞLAK","AĞMAK","AĞNAM","AĞRAZ","AĞYAR","AHALİ","AHBAP","AHCAR","AHENK","AHFAT","AHFEŞ",
	"AHİZE","AHKAM","AHLAF","AHLAK","AHLAT","AHMAK","AHRAZ","AHŞAP","AHVAL","AİDAT","AJANS","AJİTE","AKABE","AKAİT","AKAJU",
	"AKALA","AKBAŞ","AKÇIL","AKDUT","AKEMİ","AKICI","AKİDE","AKKOR","AKKÖY","AKKUŞ","AKLAN","AKLEN","AKLIK","AKMAK","AKMAN",
	"AKMAZ","AKONT","AKORT","AKPAS","AKRAN","AKREP","AKSAK","AKSAM","AKSAN","AKSON","AKŞAM","AKŞIN","AKTAR","AKTAŞ","AKTİF",
	"AKTÖR","AKVAM","ALACA","ALAKA","ALARM","ALAZA","ALBAY","ALBÜM","ALÇAK","ALENİ","ALEVİ","ALEYH","ALGIN","ALICI","ALİZE",
	"ALKAN","ALKIM","ALKIŞ","ALKİL","ALKOL","ALLAH","ALLEM","ALLIK","ALMAÇ","ALMAK","ALMAN","ALMAŞ","ALMUS","ALNAÇ","ALTES",
	"ALTIK","ALTIN","ALTIZ","ALTLI","ALYAN","ALYON","AMADE","AMBAR","AMBER","AMELE","AMELİ","AMİGO","AMORF","AMPER","AMPİR",
	"AMPUL","AMUDİ","ANACA","ANALI","ANANE","ANCAK","ANDAÇ","ANDIÇ","ANDIK","ANDIZ","ANELE","ANEMİ","ANGIÇ","ANGIN","ANGUT",
	"ANİDE","ANİME","ANJİN","ANKET","ANLAK","ANLAM","ANLIK","ANMAK","ANONS","ANSIZ","ANTEN","ANTET","ANTİK","ANTLI","ANTRE",
	"ANÜRİ","ANYON","ANZAK","APACI","APİKO","APLİK","APORT","APOŞİ","APOTR","APRİL","APSİS","APTAL","ARABA","ARABİ","ARACI",
	"ARAKA","ARALI","ARAMA","ARAMİ","ARAZİ","ARDAK","ARDIÇ","ARDIL","ARENA","ARGAÇ","ARGIN","ARGIT","ARGON","ARICI","ARIZA",
	"ARIZİ","ARİFE","ARİYA","ARİZA","ARKAÇ","ARKIT","ARKOZ","ARMUT","ARMUZ","AROMA","ARPÇI","ARPEJ","ARSIZ","ARSİN","ARŞIN",
	"ARŞİV","ARTÇI","ARTER","ARTIK","ARTIM","ARTIN","ARTIŞ","ARTMA","ASABİ","ASHAP","ASILI","ASİDE","ASİST","ASKAT","ASKER",
	"ASKLI","ASLAN","ASLEN","ASLIK","ASMAK","ASPUR","ASTAR","ASTAT","ASTIM","ASTİK","ASUDE","ASYÖN","AŞAĞI","AŞAMA","AŞARİ",
	"AŞEVİ","AŞICI","AŞILI","AŞIRI","AŞİNA","AŞKIN","AŞLIK","AŞMAK","AŞURE","ATAMA","ATARİ","ATAŞE","ATFEN","ATICI","ATILI",
	"ATLAS","ATLET","ATMAK","ATMIK","AVANE","AVANS","AVARA","AVARE","AVAZE","AVDET","AVİZE","AVLAK","AVRAT","AVRET","AVŞAR",
	"AVUNÇ","AVURT","AYDIN","AYEVİ","AYGIR","AYGIT","AYICI","AYIRT","AYLAK","AYLIK","AYMAK","AYMAZ","AYNAZ","AYNEN","AYRAÇ",
	"AYRAN","AYRIÇ","AYRIK","AYRIM","AYRIT","AYSAR","AYSIZ","AYVAN","AYVAZ","AYYAR","AYYAŞ","AYYUK","AZADE","AZAMİ","AZERİ",
	"AZGIN","AZILI","AZİZE","AZLIK","AZMAK","AZMAN","AZNİF","AZOİK","AZVAY","BABAÇ","BABAİ","BACAK","BAÇÇI","BADAL","BADAS",
	"BADAT","BADEM","BADIÇ","BADİK","BADYA","BAFRA","BAGAJ","BAGET","BAĞAN","BAĞCI","BAĞDA","BAĞIL","BAĞIM","BAĞIN","BAĞIR",
	"BAĞIŞ","BAĞIT","BAĞLI","BAHAİ","BAHAR","BAHÇE","BAHİR","BAHİS","BAHRİ","BAKAÇ","BAKAM","BAKAN","BAKIM","BAKIR","BAKIŞ",
	"BAKİR","BAKLA","BAKMA","BALAR","BALAT","BALCI","BALDO","BALET","BALIK","BALİĞ","BALKI","BALLI","BALON","BALOZ","BALTA",
	"BALYA","BAMBU","BAMYA","BANAK","BANAL","BANAZ","BANDO","BANJO","BANKA","BANKO","BANMA","BANYO","BARAJ","BARAK","BARAN",
	"BARBA","BARCI","BARÇA","BARDA","BARDO","BAREM","BARET","BARIŞ","BARİT","BARİZ","BARKA","BAROK","BARON","BARUT","BASAK",
	"BASAR","BASEN","BASIK","BASIM","BASIN","BASIŞ","BASİL","BASİT","BASKI","BASMA","BASSO","BASTI","BASUR","BASYA","BAŞAK",
	"BAŞAT","BAŞÇI","BAŞKA","BAŞLI","BAŞTA","BATAK","BATAR","BATIK","BATIL","BATIN","BATIŞ","BATİK","BATKI","BATMA","BATON",
	"BATUR","BAVCI","BAVLI","BAVUL","BAYAN","BAYAT","BAYIR","BAYMA","BAYRI","BAZAL","BAZEN","BAZİK","BAZİT","BEBEK","BECET",
	"BEDEL","BEDEN","BEDİİ","BEDİK","BEDİR","BEDÜK","BEGÜM","BEHER","BEHEY","BEHRE","BEKAR","BEKAS","BEKÇİ","BEKRİ","BELCE",
	"BELDE","BELEK","BELEN","BELEŞ","BELGE","BELGİ","BELİĞ","BELİK","BELİT","BELKİ","BELLİ","BEMOL","BENCE","BENCİ","BENDE",
	"BENEK","BENGİ","BENİZ","BENLİ","BERAT","BERİL","BERRİ","BESİN","BESNİ","BESTE","BEŞER","BEŞİK","BEŞİZ","BEŞLİ","BEŞME",
	"BEŞON","BEŞUŞ","BETER","BETİK","BETİM","BETON","BEYAN","BEYAZ","BEYİN","BEYİT","BEYZİ","BEZCİ","BEZEK","BEZEN","BEZGİ",
	"BEZİK","BEZİR","BEZİŞ","BEZME","BEZSİ","BICIL","BIÇAK","BIÇIK","BIÇKI","BIDIK","BIKIŞ","BIKMA","BIYIK","BIZIR","BİBER",
	"BİBLO","BİCİK","BİÇEM","BİÇİM","BİÇİŞ","BİÇKİ","BİÇME","BİDAR","BİDAT","BİDON","BİHUŞ","BİKES","BİKİR","BİLAR","BİLEK",
	"BİLET","BİLGE","BİLGİ","BİLİM","BİLİR","BİLİŞ","BİLME","BİLYE","BİNDİ","BİNEK","BİNER","BİNGİ","BİNİŞ","BİNİT","BİNME",
	"BİRAZ","BİRCİ","BİRER","BİREY","BİRİM","BİRLİ","BİRUN","BİŞEK","BİTAP","BİTEK","BİTEY","BİTİK","BİTİM","BİTİŞ","BİTKİ",
	"BİTLİ","BİTME","BİTÜM","BİYEL","BİZAR","BİZCE","BİZON","BLOKE","BOBİN","BOCCE","BOCUK","BODUÇ","BODUR","BOĞAK","BOĞAZ",
	"BOĞMA","BOĞUK","BOĞUM","BOHÇA","BOHEM","BOKLU","BOLCA","BOMBA","BOMBE","BORAK","BORAN","BORAT","BORDA","BORDO","BORİK",
	"BORSA","BORUK","BOYAR","BOYCA","BOYLU","BOYNA","BOYOZ","BOYUN","BOYUT","BOZCA","BOZMA","BOZUK","BOZUM","BOZUŞ","BÖBÜR",
	"BÖCEK","BÖĞÜR","BÖLEN","BÖLGE","BÖLME","BÖLÜK","BÖLÜM","BÖLÜŞ","BÖLÜT","BÖNCE","BÖREK","BÖYLE","BRANŞ","BRAVO","BRONŞ",
	"BRONZ","BRÖVE","BUCAK","BUÇUK","BUDAK","BUDUN","BUGÜN","BUĞRA","BUĞUR","BUĞUZ","BUHAR","BUHUR","BUKET","BUKLE","BULAK",
	"BULGU","BULMA","BULUŞ","BULUT","BUNAK","BUNCA","BUNLU","BUNMA","BURAK","BURCU","BURGU","BURMA","BURSA","BURUK","BURUN",
	"BUŞON","BUTİK","BUTLU","BUTON","BUYMA","BUYOT","BUZCU","BUZLA","BUZLU","BUZUL","BÜCÜR","BÜĞET","BÜĞLÜ","BÜKEN","BÜKME",
	"BÜKÜÇ","BÜKÜK","BÜKÜM","BÜKÜN","BÜKÜŞ","BÜLUĞ","BÜNYE","BÜRGÜ","BÜRÜK","BÜRÜN","BÜTAN","BÜTÇE","BÜTEN","BÜTEY","BÜTÜN",
	"BÜVET","BÜYÜK","BÜZGÜ","BÜZME","BÜZÜK","CACIK","CADDE","CAHİL","CAİZE","CALİP","CAMCI","CAMIZ","CAMİA","CAMİT","CAMLI",
	"CAMSI","CANAN","CANİK","CANİP","CANLI","CARLI","CARTA","CASUS","CAYIŞ","CAYMA","CAZCI","CAZİP","CAZLI","CEBEL","CEBİN",
	"CEBİR","CEBRİ","CEDEL","CEDİT","CEDRE","CEHİL","CEHRE","CEHRİ","CEKET","CELAL","CELBE","CELEP","CELİL","CELSE","CEMAL",
	"CEMAN","CEMİL","CEMRE","CENAH","CENAP","CENİN","CENUP","CEPÇİ","CEPHE","CEREN","CESET","CESİM","CESUR","CEVAP","CEVAZ",
	"CEVİR","CEVİZ","CEVVİ","CEVZA","CEZAİ","CEZBE","CEZİR","CEZRİ","CEZVE","CIBIL","CICIK","CILIZ","CIVIK","CIVMA","CIZIK",
	"CİBİN","CİBRE","CİCİK","CİCİM","CİCOZ","CİDAL","CİDAR","CİDDİ","CİĞER","CİHAN","CİHAR","CİHAT","CİHAZ","CİHET","CİLVE",
	"CİMRİ","CİNAİ","CİNAS","CİNCİ","CİNLİ","CİNSİ","CİRİM","CİRİT","CİSİM","CİVAN","CİVAR","CİZRE","CİZYE","CONTA","CORUM",
	"COŞKU","COŞMA","COŞUM","COŞUŞ","CUDAM","CUKKA","CUMBA","CUNDA","CUNTA","CUŞİŞ","CÜBBE","CÜCÜK","CÜLUS","CÜMLE","CÜNHA",
	"CÜNUN","CÜNÜP","CÜRET","CÜRUF","CÜRÜM","CÜSSE","ÇABUK","ÇADIR","ÇAĞLA","ÇAĞMA","ÇAĞRI","ÇAKAL","ÇAKAR","ÇAKER","ÇAKIL",
	"ÇAKIM","ÇAKIN","ÇAKIR","ÇAKIŞ","ÇAKMA","ÇAKRA","ÇALAK","ÇALAP","ÇALAR","ÇALGI","ÇALIK","ÇALIM","ÇALIŞ","ÇALKI","ÇALMA",
	"ÇALTI","ÇAMAŞ","ÇAMAT","ÇAMÇA","ÇAMUR","ÇANAK","ÇANCI","ÇANDI","ÇANLI","ÇANTA","ÇAPAK","ÇAPAR","ÇAPLA","ÇAPLI","ÇAPMA",
	"ÇAPUL","ÇAPUT","ÇARIK","ÇARKA","ÇARPI","ÇARŞI","ÇASAR","ÇAŞIT","ÇATAK","ÇATAL","ÇATIK","ÇATIŞ","ÇATKI","ÇATMA","ÇAVLI",
	"ÇAVMA","ÇAVUN","ÇAVUŞ","ÇAYAN","ÇAYCI","ÇAYIR","ÇAYLI","ÇEBİÇ","ÇECİK","ÇEÇEN","ÇEDİK","ÇEHRE","ÇEKÇE","ÇEKEK","ÇEKEL",
	"ÇEKEM","ÇEKER","ÇEKİÇ","ÇEKİK","ÇEKİM","ÇEKİŞ","ÇEKME","ÇEKÜL","ÇELEK","ÇELEN","ÇELGİ","ÇELİK","ÇELİM","ÇELLO","ÇELME",
	"ÇEMÇE","ÇEMEN","ÇEMİÇ","ÇEMİŞ","ÇENEK","ÇENET","ÇENGİ","ÇEPEL","ÇEPER","ÇEPEZ","ÇEPİN","ÇEPNİ","ÇERAĞ","ÇERÇİ","ÇEREZ",
	"ÇERGE","ÇEŞİT","ÇEŞME","ÇEŞNİ","ÇETİN","ÇEVİK","ÇEVRE","ÇEVRİ","ÇEYİZ","ÇIBAN","ÇIDAM","ÇIFIT","ÇIĞIR","ÇIKAK","ÇIKAN",
	"ÇIKAR","ÇIKIK","ÇIKIN","ÇIKIŞ","ÇIKIT","ÇIKMA","ÇIKRA","ÇIKTI","ÇINAR","ÇINGI","ÇIPIR","ÇIRAĞ","ÇIRAK","ÇIRPI","ÇITAK",
	"ÇITIR","ÇIVMA","ÇIYAN","ÇİÇEK","ÇİFTE","ÇİGAN","ÇİĞDE","ÇİĞİL","ÇİĞİN","ÇİĞİT","ÇİĞLİ","ÇİLEK","ÇİLLİ","ÇİMEK","ÇİMEN",
	"ÇİMME","ÇİNCE","ÇİNKO","ÇİNLİ","ÇİPİL","ÇİRİŞ","ÇİROZ","ÇİSEN","ÇİŞİK","ÇİTEN","ÇİTME","ÇİVİT","ÇİZER","ÇİZGE","ÇİZGİ",
	"ÇİZİK","ÇİZİM","ÇİZİŞ","ÇİZME","ÇOBAN","ÇOCUK","ÇOĞUL","ÇOĞUN","ÇOKAL","ÇOKÇA","ÇOKÇU","ÇOKLU","ÇOLAK","ÇOLPA","ÇOMAK",
	"ÇOMAR","ÇOPRA","ÇOPUR","ÇORAK","ÇORAP","ÇORBA","ÇORLU","ÇORUM","ÇOTRA","ÇOTUK","ÇÖĞME","ÇÖĞÜR","ÇÖKEK","ÇÖKEL","ÇÖKME",
	"ÇÖKÜK","ÇÖKÜM","ÇÖKÜŞ","ÇÖMÇE","ÇÖMEZ","ÇÖMME","ÇÖPÇÜ","ÇÖPLÜ","ÇÖREK","ÇÖRKÜ","ÇÖRTÜ","ÇÖVEN","ÇÖZGÜ","ÇÖZME","ÇÖZÜK",
	"ÇÖZÜM","ÇÖZÜŞ","ÇUBUK","ÇUKUR","ÇULCU","ÇULHA","ÇUMRA","ÇUPRA","ÇUŞKA","ÇUVAL","ÇUVAŞ","ÇÜKÜR","ÇÜNKÜ","ÇÜRÜK","DADAŞ",
	"DADAY","DAĞAR","DAĞCI","DAĞLI","DAHİL","DAİMA","DAİMİ","DAİRE","DAKİK","DALAK","DALAN","DALAŞ","DALGA","DALGI","DALIŞ",
	"DALIZ","DALLI","DALMA","DALSI","DALYA","DAMAK","DAMAL","DAMAR","DAMAT","DAMGA","DAMLA","DAMLI","DANCA","DANIŞ","DARAÇ",
	"DARAŞ","DARBE","DARCA","DASİT","DATÇA","DATİF","DAVAR","DAVET","DAVUL","DAVYA","DAYAK","DEBBE","DEBİL","DEFİN","DEFNE",
	"DEGAJ","DEĞEÇ","DEĞER","DEĞİL","DEĞİM","DEĞİN","DEĞİŞ","DEĞME","DEİST","DEİZM","DEKAN","DEKAR","DEKOR","DELGİ","DELİK",
	"DELİL","DELME","DELTA","DEMCİ","DEMEÇ","DEMEK","DEMET","DEMİN","DEMİR","DEMLİ","DEMRE","DENEK","DENET","DENEY","DENGE",
	"DENİM","DENİZ","DENLİ","DENME","DENYO","DEPAR","DERBİ","DERGİ","DERİK","DERİN","DERME","DERUN","DERYA","DESEN","DESTE",
	"DEŞİK","DEŞME","DETAY","DEVAM","DEVCE","DEVİM","DEVİR","DEVRE","DEVRİ","DEYİM","DEYİŞ","DIĞAN","DILAK","DIŞIK","DIŞKI",
	"DİBEK","DİCLE","DİDAR","DİDİM","DİDON","DİGOR","DİĞER","DİKÇE","DİKEÇ","DİKEL","DİKEN","DİKEY","DİKİM","DİKİŞ","DİKİT",
	"DİKİZ","DİKME","DİKSE","DİKTA","DİKTE","DİLCE","DİLCİ","DİLEK","DİLİM","DİLİŞ","DİLLİ","DİLME","DİLSİ","DİMAĞ","DİNAR",
	"DİNCE","DİNCİ","DİNEK","DİNEN","DİNGİ","DİNGO","DİNİŞ","DİNLİ","DİNME","DİPLİ","DİREK","DİREN","DİREY","DİRİĞ","DİRİL",
	"DİRİM","DİSKO","DİŞÇİ","DİŞİL","DİŞLİ","DİTME","DİVAL","DİVAN","DİVİK","DİVİT","DİYAR","DİYET","DİYEZ","DİYOT","DİZEK",
	"DİZEL","DİZEM","DİZEY","DİZGE","DİZGİ","DİZİM","DİZİN","DİZİŞ","DİZME","DOBRA","DOGMA","DOĞAÇ","DOĞAL","DOĞAN","DOĞMA",
	"DOĞRU","DOĞUM","DOĞUŞ","DOKUZ","DOLAK","DOLAM","DOLAP","DOLAR","DOLAY","DOLGU","DOLMA","DOLUM","DOLUŞ","DOMUR","DOMUZ",
	"DONAM","DONLU","DONMA","DONÖR","DONRA","DONUK","DORSE","DORUK","DORUM","DOSYA","DOYGU","DOYMA","DOYUM","DOYUŞ","DOZAJ",
	"DOZER","DÖGER","DÖKME","DÖKÜK","DÖKÜM","DÖKÜŞ","DÖLEK","DÖLÜT","DÖNEÇ","DÖNEK","DÖNEL","DÖNEM","DÖNER","DÖNGÜ","DÖNME",
	"DÖNÜK","DÖNÜM","DÖNÜŞ","DÖNÜT","DÖPER","DÖŞEK","DÖŞEM","DÖŞLÜ","DÖVEÇ","DÖVİZ","DÖVME","DÖVÜŞ","DRAJE","DRAMA","DUACI",
	"DUALI","DUBAR","DUBLE","DUDAK","DUHUL","DULDA","DULUK","DUMAN","DUMUR","DURAÇ","DURAK","DURAL","DURGU","DURMA","DURUK",
	"DURUM","DURUŞ","DUŞAK","DUŞLU","DUTÇU","DUVAK","DUVAR","DUYAR","DUYGU","DUYMA","DUYUM","DUYUŞ","DÜBEL","DÜBEŞ","DÜÇAR",
	"DÜDEN","DÜDÜK","DÜGAH","DÜĞME","DÜĞÜM","DÜĞÜN","DÜMEN","DÜNİT","DÜNKÜ","DÜNÜR","DÜNYA","DÜRME","DÜRTÜ","DÜRÜM","DÜRZİ",
	"DÜRZÜ","DÜŞÇÜ","DÜŞES","DÜŞEŞ","DÜŞEY","DÜŞKÜ","DÜŞME","DÜŞÜK","DÜŞÜN","DÜŞÜŞ","DÜŞÜT","DÜVEL","DÜVEN","DÜVER","DÜYEK",
	"DÜYUN","DÜZCE","DÜZEÇ","DÜZEM","DÜZEN","DÜZEY","DÜZGÜ","DÜZME","EBCET","EBEDİ","EBELİ","EBLEH","ECDAT","EÇHEL","EDALI",
	"EDEBİ","EDİNÇ","EDVAR","EFDAL","EFECE","EFEKT","EFKAR","EFLAK","EFRAT","EFRİZ","EFSUN","EFSUS","EGALE","EGLOG","EGZOZ",
	"EĞLEK","EĞMEÇ","EĞMEK","EĞMÜR","EĞREZ","EĞRİM","EHRAM","EHVEN","EJDER","EKİCİ","EKİLİ","EKLEM","EKLER","EKMEK","EKOSE",
	"EKRAN","EKSEN","EKSER","EKSİK","EKSİN","EKSİZ","EKÜRİ","ELBET","ELCİK","ELÇEK","ELÇİM","ELDEN","ELEJİ","ELEME","ELGİN",
	"ELHAK","ELİFİ","ELİPS","ELLİK","ELMAS","ELMEK","ELVAN","ELYAF","ELZEM","EMARE","EMAYE","EMCEK","EMCİK","EMİCİ","EMLAK",
	"EMLİK","EMMEÇ","EMMEK","EMRAZ","EMSAL","EMTİA","EMVAL","EMZİK","ENAYİ","ENCAM","ENDAM","ENDER","ENEME","ENEZE","ENFES",
	"ENGEL","ENGİN","ENKAZ","ENLEM","ENÖTE","ENSAR","ENSİZ","ENTEL","ENZİM","EOSEN","EPEYİ","EPOPE","EPSEM","ERBAA","ERBAP",
	"ERBAŞ","ERBİN","ERCİK","ERCİŞ","ERDEK","ERDEM","ERDEN","ERGEN","ERGİN","ERİKA","ERİME","ERİNÇ","ERKAN","ERKEÇ","ERKEK",
	"ERKEN","ERKİN","ERKLİ","ERLİK","ERMEK","ERMİN","ERMİŞ","EROİN","ERSİZ","ERVAH","ERZAK","ERZEL","ERZİN","ESAME","ESANS",
	"ESASİ","ESBAK","ESBAP","ESEME","ESHAM","ESİRE","ESKİL","ESKİZ","ESLAF","ESLEK","ESMEK","ESMER","ESNAF","ESNEK","ESPAS",
	"ESPRİ","ESRAR","ESRİK","ESSAH","ESTER","ESTET","ESVAP","EŞARP","EŞHAS","EŞKAL","EŞKİN","EŞLEK","EŞLEM","EŞLİK","EŞMEK",
	"EŞRAF","EŞREF","EŞSİZ","ETÇİK","ETÇİL","ETENE","ETFAL","ETKEN","ETKİN","ETLİK","ETMEK","ETMEN","ETNİK","ETRAF","ETSEL",
	"ETSİZ","EVAZE","EVCEK","EVCİK","EVCİL","EVDEŞ","EVGİN","EVHAM","EVİYE","EVKAF","EVLAT","EVLEK","EVLİK","EVRAK","EVRAT",
	"EVREN","EVRİK","EVRİM","EVSAF","EVSİN","EVSİZ","EVVEL","EYLEM","EYLÜL","EYTAM","EYVAH","EYVAN","EYYAM","EZANİ","EZBER",
	"EZELİ","EZGİÇ","EZGİN","EZİCİ","EZİNÇ","EZİNE","EZMEK","FACİA","FAGOT","FAHİŞ","FAHRİ","FAHTE","FAHUR","FAKAT","FAKİH",
	"FAKİR","FAKÜL","FALAN","FALCI","FALEZ","FALSO","FALYA","FANTA","FANTİ","FANUS","FANYA","FARAD","FARAŞ","FARBA","FARİĞ",
	"FARİL","FASET","FASIK","FASIL","FASİH","FASİT","FASKA","FASLI","FASON","FATİH","FATSA","FAUNA","FAYDA","FAZIL","FAZLA",
	"FECİR","FEDAİ","FEHİM","FEHVA","FEKÜL","FELAH","FELEK","FENCİ","FENER","FENİK","FENNİ","FENOL","FERAĞ","FERAH","FERDA",
	"FERDİ","FERİH","FERİK","FERLİ","FERMA","FESAT","FESİH","FETHA","FETİH","FETİŞ","FETÜS","FETVA","FEVRİ","FEYİZ","FIKIH",
	"FIKRA","FIRÇA","FIRIN","FIRKA","FIŞKI","FITIK","FITRİ","FİBER","FİDAN","FİDYE","FİFRE","FİGAN","FİGÜR","FİİLİ","FİKİR",
	"FİKRİ","FİLAN","FİLAR","FİLET","FİLİZ","FİLOZ","FİLSİ","FİLUM","FİNAL","FİNCE","FİNİŞ","FİRAK","FİRAR","FİREZ","FİRİK",
	"FİRMA","FİSKE","FİSTO","FİŞEK","FİŞKA","FİŞLİ","FİTÇİ","FİTİL","FİTİN","FİTNE","FİTRE","FİYAT","FİZİK","FLAMA","FLEOL",
	"FLORA","FLORİ","FLÖRE","FLÖRT","FODLA","FODRA","FODUL","FOKUS","FOLYO","FONDA","FONDÜ","FONEM","FORMA","FOROZ","FORSA",
	"FORTE","FORUM","FOSİL","FRANK","FRAPE","FRENK","FRESK","FREZE","FRİGO","FRİSA","FUAYE","FUHUŞ","FUJER","FULAR","FULYA",
	"FUNDA","FURYA","FÜLÜS","FÜNYE","FÜSUN","FÜTUR","FÜZEN","GABİN","GABRO","GABYA","GADİR","GAFİL","GAFUR","GAİLE","GAİTA",
	"GALAT","GALİP","GALİZ","GALON","GALOP","GALOŞ","GAMBA","GAMET","GAMLI","GAMZE","GARAJ","GARAZ","GARBİ","GARİP","GAROZ",
	"GASİL","GAŞİY","GAUSS","GAVOT","GAVUR","GAYDA","GAYET","GAYRI","GAYRİ","GAYUR","GAYYA","GAZAL","GAZAP","GAZEL","GAZLI",
	"GAZOZ","GAZVE","GEBEŞ","GEBRE","GEBZE","GEÇÇE","GEÇEK","GEÇEN","GEÇER","GEÇİM","GEÇİŞ","GEÇİT","GEÇME","GEDİK","GEDİZ",
	"GEDME","GELEN","GELİN","GELİR","GELİŞ","GELME","GEMRE","GENEL","GENİŞ","GENİZ","GENOM","GEOİT","GERÇİ","GEREÇ","GEREK",
	"GEREN","GERGİ","GERİM","GERİŞ","GERİZ","GERME","GERZE","GETTO","GEVAŞ","GEVEN","GEVİŞ","GEVME","GEYİK","GEYŞA","GEYVE",
	"GEZİŞ","GEZME","GICIK","GICIR","GIDIK","GIDIM","GIPTA","GIRLA","GIYAP","GİDER","GİDİŞ","GİDON","GİRAY","GİRDİ","GİREN",
	"GİRİM","GİRİŞ","GİRME","GİTAR","GİTME","GİYİM","GİYİŞ","GİYİT","GİYME","GİYSİ","GİZEM","GİZİL","GİZLİ","GLASE","GNAYS",
	"GOCUK","GODOŞ","GOLCÜ","GOLLÜ","GONCA","GORİL","GOTÇA","GOTİK","GÖBEK","GÖBEL","GÖBÜT","GÖCEN","GÖÇER","GÖÇME","GÖÇÜK",
	"GÖÇÜM","GÖÇÜŞ","GÖDEN","GÖDEŞ","GÖĞEM","GÖĞÜS","GÖKÇE","GÖLEK","GÖLET","GÖLGE","GÖLÜK","GÖMEÇ","GÖMME","GÖMÜK","GÖMÜŞ",
	"GÖMÜT","GÖNCÜ","GÖNEN","GÖNÜL","GÖNYE","GÖREV","GÖRGÜ","GÖRME","GÖRÜM","GÖRÜŞ","GÖVDE","GÖVEK","GÖVEL","GÖVEM","GÖYME",
	"GÖYÜK","GÖZCÜ","GÖZDE","GÖZER","GÖZGÜ","GÖZLÜ","GRADO","GRENA","GRİZU","GROGİ","GROSA","GUANO","GUATR","GUDDE","GUGUK",
	"GULAŞ","GULET","GURME","GURUP","GURUR","GUSTO","GUSÜL","GÜBRE","GÜBÜR","GÜCÜK","GÜCÜN","GÜÇLÜ","GÜDEK","GÜDÜK","GÜDÜL",
	"GÜDÜM","GÜFTE","GÜĞÜM","GÜLCÜ","GÜLEÇ","GÜLLE","GÜLLÜ","GÜLME","GÜLÜK","GÜLÜŞ","GÜLÜT","GÜMEÇ","GÜMÜL","GÜMÜŞ","GÜNAH",
	"GÜNCE","GÜNDE","GÜNEÇ","GÜNEŞ","GÜNEY","GÜNLÜ","GÜPÜR","GÜRCÜ","GÜREŞ","GÜRSU","GÜRUH","GÜRÜN","GÜTME","GÜVEÇ","GÜVEN",
	"GÜVEZ","GÜZEL","GÜZEY","GÜZÜN","HABBE","HABER","HABEŞ","HABİP","HABİS","HACET","HACİM","HACİR","HACİZ","HAÇLI","HADDE",
	"HADIM","HADİM","HADİS","HAFIZ","HAFİF","HAFİK","HAFİT","HAFTA","HAHAM","HAHHA","HAİLE","HAKAN","HAKAS","HAKÇA","HAKEM",
	"HAKİM","HAKİR","HAKLI","HALAÇ","HALAS","HALAT","HALAY","HALEF","HALEL","HALEN","HALET","HALFA","HALİÇ","HALİK","HALİM",
	"HALİS","HALKA","HALUK","HAMAK","HAMAL","HAMAM","HAMEL","HAMIZ","HAMİL","HAMİŞ","HAMLA","HAMLE","HAMSE","HAMSİ","HAMUR",
	"HAMUT","HANAK","HANAY","HANCI","HANDE","HANEK","HANGİ","HANIM","HANUT","HANYA","HAPAZ","HAPÇI","HAPİS","HAPŞU","HARAÇ",
	"HARAM","HARAP","HARAR","HARBE","HARBİ","HAREM","HARIM","HARIN","HARİÇ","HARİM","HARİR","HARİS","HARLI","HARTA","HASAR",
	"HASAT","HASBİ","HASEP","HASET","HASIL","HASIM","HASIR","HASİS","HASPA","HASSA","HASSE","HASTA","HASUT","HAŞAT","HAŞIL",
	"HAŞİN","HAŞİR","HAŞİŞ","HAŞİV","HATAY","HATIL","HATIR","HATİF","HATİM","HATİP","HATMİ","HATTA","HATUN","HAVAİ","HAVAN",
	"HAVAS","HAVLI","HAVLU","HAVRA","HAVSA","HAVUÇ","HAVUT","HAVUZ","HAVVA","HAVYA","HAVZA","HAYAL","HAYAT","HAYBE","HAYCI",
	"HAYDA","HAYDİ","HAYFA","HAYIF","HAYIR","HAYIT","HAYIZ","HAYLİ","HAYTA","HAZAN","HAZAR","HAZCI","HAZIK","HAZIM","HAZIR",
	"HAZİN","HAZNE","HAZRO","HECİN","HEDEF","HEDER","HEDİK","HEKİM","HELAK","HELAL","HELEN","HELİK","HELİS","HELKE","HELME",
	"HELVA","HEMEN","HEMPA","HEMZE","HENÜZ","HEPSİ","HEREK","HERİF","HERİK","HERKE","HERTZ","HERZE","HESAP","HEVES","HEYBE",
	"HEYET","HEZEL","HEZEN","HIFIZ","HIMIŞ","HINIS","HIRBO","HIRKA","HIRLI","HISIM","HIŞIM","HIŞIR","HIYAR","HIZAR","HIZIR",
	"HIZLA","HIZLI","HIZMA","HİCAP","HİCAZ","HİCİV","HİCRİ","HİÇÇİ","HİDİV","HİDRA","HİKEM","HİLAF","HİLAL","HİLAT","HİLYE",
	"HİMEN","HİNDİ","HİNDU","HİPPİ","HİSAR","HİSLİ","HİSSE","HİSSİ","HİTAM","HİTAN","HİTAP","HİTİT","HİZAN","HİZİP","HODAN",
	"HODRİ","HOKEY","HOKKA","HONAZ","HOPPA","HORON","HOROZ","HORST","HOŞAF","HOŞÇA","HOŞUR","HOTOZ","HOZAN","HOZAT","HÖDÜK",
	"HÖYÜK","HUDUT","HUKUK","HULUL","HULUS","HUMAR","HUMMA","HUMOR","HUMUS","HURDA","HURMA","HURRA","HURUÇ","HUSUF","HUSUL",
	"HUSUS","HUSYE","HUTBE","HUTUT","HUYLU","HUZUR","HÜCRE","HÜCUM","HÜKMİ","HÜKÜM","HÜLLE","HÜLYA","HÜNER","HÜNSA","HÜRLE",
	"HÜRYA","HÜSÜN","HÜYÜK","HÜZME","HÜZÜN","IĞDIR","IĞRIP","IHMAK","ILGAR","ILGAZ","ILGIM","ILGIN","ILGIN","ILICA","ILICA",
	"ILIMA","ILTAR","IRAMA","IRGAT","IRKÇI","IRMAK","ISKAT","ISLAH","ISLAK","ISLIK","ISRAR","ISSIZ","ISTAR","IŞIMA","IŞKIN",
	"IŞTIR","ITLAK","ITRAH","IZGIN","IZRAR","İBARE","İBATE","İBDAİ","İBLAĞ","İBLİS","İBRAZ","İBRET","İBRİK","İBZAL","İCBAR",
	"İCMAL","İÇERİ","İÇİCİ","İÇKİN","İÇLEM","İÇLİK","İÇMEK","İÇREK","İÇSEL","İÇSİZ","İÇTEN","İÇYÜZ","İDADİ","İDAME","İDARE",
	"İDARİ","İDDİA","İDEAL","İDMAN","İDRAK","İDRAR","İFADE","İFFET","İFHAM","İFLAH","İFLAS","İFRAĞ","İFRAT","İFRAZ","İFRİT",
	"İFSAT","İFTAR","İĞDİR","İĞDİŞ","İĞFAL","İĞLİK","İHALE","İHATA","İHBAR","İHDAS","İHLAL","İHLAS","İHMAL","İHRAÇ","İHRAM",
	"İHRAZ","İHSAN","İHSAS","İHTAR","İHVAN","İHZAR","İKAME","İKBAL","İKDAM","İKİCİ","İKİLİ","İKLİM","İKMAL","İKONA","İKRAH",
	"İKRAM","İKRAR","İKRAZ","İKSİR","İLAHE","İLAHİ","İLAHİ","İLAVE","İLBAY","İLENÇ","İLERİ","İLETİ","İLGEÇ","İLHAK","İLHAM",
	"İLHAN","İLKAH","İLKEL","İLKİN","İLLET","İLMEK","İLMİK","İLZAM","İMALE","İMALI","İMAME","İMBAT","İMBİK","İMDAT","İMECE",
	"İMKAN","İMLEÇ","İMLEK","İMLİK","İMREN","İMROZ","İMSAK","İNANÇ","İNCİK","İNCİL","İNCİR","İNDİS","İNFAK","İNFAZ","İNGİN",
	"İNKAR","İNMEK","İNÖNÜ","İNSAF","İNSAN","İNŞAT","İNTAÇ","İNTAK","İNTAN","İNZAL","İPÇİK","İPEKA","İPHAM","İPLİK","İPSİZ",
	"İPTAL","İPUCU","İRADE","İRADİ","İRFAN","İRİCE","İRİTE","İRKME","İRMİK","İRONİ","İRSAL","İRSEN","İRŞAT","İSALE","İSEVİ",
	"İSHAL","İSKAN","İSKOÇ","İSLAM","İSLAV","İSLİM","İSMEN","İSMET","İSNAT","İSPAT","İSPİR","İSPİR","İSPİT","İSRAF","İSTEK",
	"İSTEM","İSTER","İSTİF","İSTİM","İSTOP","İSYAN","İŞEME","İŞGAL","İŞKAL","İŞKİL","İŞLEK","İŞLEM","İŞLEV","İŞLİK","İŞMAR",
	"İŞRET","İŞSİZ","İŞTAH","İŞTEŞ","İŞYAR","İTAAT","İTEĞİ","İTHAF","İTHAL","İTHAM","İTİCİ","İTİLA","İTİNA","İTLAF","İTLİK",
	"İTMAM","İTMEK","İVEDİ","İVESİ","İVMEK","İYİCE","İZABE","İZAFE","İZAFİ","İZALE","İZHAR","İZLEK","İZLEM","İZLEV","İZMİR",
	"İZMİT","İZNİK","İZOLE","İZZET","JAKAR","JAPON","JARSE","JELOZ","JETON","JİKLE","JİLET","JOKER","JOKEY","JÜPON","KABAK",
	"KABAN","KABIZ","KABİL","KABİN","KABİR","KABLO","KABUK","KABUL","KABUS","KABZA","KAÇAK","KAÇAR","KAÇIK","KAÇIŞ","KAÇLI",
	"KAÇMA","KAÇTA","KADAR","KADEH","KADEM","KADER","KADIN","KADİM","KADİR","KADİT","KADRO","KADÜK","KAFES","KAFİR","KAFUR",
	"KAGİR","KAĞAN","KAĞIT","KAĞNI","KAHIR","KAHİL","KAHİN","KAHİR","KAHPE","KAHTA","KAHVE","KAHYA","KAİDE","KAİME","KAKAÇ",
	"KAKAO","KAKIÇ","KAKIM","KAKIŞ","KAKMA","KAKÜL","KALAK","KALAN","KALAS","KALAY","KALBİ","KALCI","KALÇA","KALEM","KALFA",
	"KALIÇ","KALIK","KALIM","KALIN","KALIP","KALIŞ","KALIT","KALMA","KALYA","KAMAN","KAMÇI","KAMER","KAMET","KAMGA","KAMIŞ",
	"KAMİL","KAMUS","KANAL","KANAT","KANCA","KANIK","KANIŞ","KANIT","KANİŞ","KANKA","KANLI","KANMA","KANON","KANTO","KANUN",
	"KAPAK","KAPAN","KAPIŞ","KAPİK","KAPİŞ","KAPLI","KAPMA","KAPUT","KAPUZ","KARAR","KARAY","KARGA","KARGI","KARGO","KARHA",
	"KARIK","KARIN","KARIŞ","KARLI","KARMA","KARNE","KARNİ","KARST","KARŞI","KARUN","KARYE","KASAP","KASEM","KASET","KASIK",
	"KASIM","KASIR","KASIT","KASİS","KASKO","KASLI","KASMA","KASNI","KASTİ","KAŞAN","KAŞAR","KAŞIK","KAŞİF","KAŞLI","KATAR",
	"KATÇI","KATIK","KATIM","KATIR","KATİL","KATİP","KATKI","KATLI","KATMA","KATOT","KATRE","KAVAF","KAVAK","KAVAL","KAVAS",
	"KAVAT","KAVGA","KAVİL","KAVİM","KAVİS","KAVKI","KAVMİ","KAVUK","KAVUN","KAVUT","KAVUZ","KAYAÇ","KAYAK","KAYAN","KAYAR",
	"KAYGI","KAYIK","KAYIN","KAYIP","KAYIR","KAYIŞ","KAYIT","KAYMA","KAYME","KAYRA","KAYŞA","KAZAK","KAZAN","KAZAZ","KAZIK",
	"KAZIL","KAZIM","KAZMA","KEBAN","KEBAP","KEBİR","KEBZE","KEDER","KEFAL","KEFEN","KEFİL","KEFİR","KEFNE","KEHLE","KEKEÇ",
	"KEKİK","KEKRE","KELAM","KELEK","KELEM","KELEP","KELER","KELES","KELEŞ","KELİK","KELLE","KELLİ","KEMAH","KEMAL","KEMAN",
	"KEMER","KEMHA","KEMİK","KEMRE","KENAR","KENDİ","KENEF","KENET","KENYA","KEPÇE","KEPEK","KEPEZ","KEPİR","KEPME","KERDE",
	"KEREM","KERES","KERİH","KERİM","KERİZ","KERKİ","KERTE","KERTİ","KESAT","KESBİ","KESEK","KESEL","KESEN","KESER","KESİF",
	"KESİK","KESİM","KESİN","KESİR","LAÇIN","LAÇİN","LAÇKA","LADEN","LADES","LADİK","LADİN","LAFÇI","LAFIZ","LAFZİ","LAGAR",
	"LAGOS","LAGÜN","LAĞIM","LAĞIV","LAHİT","LAHOS","LAHUT","LAHZA","LAKAP","LAKÇI","LAKİN","LAKOZ","LAMBA","LAMEL","LANDO",
	"LANET","LANSE","LAPON","LARGO","LARVA","LASKİ","LASTA","LATİF","LATİN","LAVAJ","LAVAŞ","LAVTA","LAVUK","LAYIK","LAZCA",
	"LAZER","LAZIM","LAZUT","LEÇEK","LEDÜN","LEGAL","LEĞEN","LEHÇE","LEHİM","LEMİS","LENFA","LENTO","LEPRA","LERZE","LETÇE",
	"LEVHA","LEVYE","LEYDİ","LEYLİ","LEZAR","LEZİZ","LIĞLI","LIKIR","LİBAS","LİBOŞ","LİBRE","LİDER","LİFLİ","LİGER","LİKEN",
	"LİKİT","LİKÖR","LİMAN","LİMBO","LİMİT","LİMON","LİNET","LİNİN","LİPİT","LİPOM","LİRET","LİRİK","LİSAN","LİSTE","LİTRE",
	"LİVAR","LİYAN","LİZOL","LİZÖZ","LOBUT","LODOS","LOGOS","LOJİK","LOKAL","LOKMA","LOKUM","LONCA","LONGA","LOPUR","LORTA",
	"LOŞÇA","LOTUS","LÖKOZ","LÖPÜR","LÜFER","LÜGAT","LÜGOL","LÜMEN","LÜNET","LÜPÇÜ","LÜTUF","LÜZUM","MAADA","MABAT","MABET",
	"MABUT","MACAR","MACUN","MAÇKA","MADAM","MADDE","MADDİ","MADEM","MADEN","MADER","MADİK","MADUN","MAFİŞ","MAFYA","MAGMA",
	"MAGRİ","MAHAL","MAHFE","MAHFİ","MAHIV","MAHİR","MAHRA","MAHUR","MAHUT","MAHYA","MAİLE","MAJÖR","MAKAK","MAKAM","MAKAS",
	"MAKAT","MAKET","MAKRO","MAKSİ","MAKTA","MAKTU","MAKUL","MAKUS","MALAK","MALAZ","MALCA","MALCI","MALEN","MALİK","MALUL",
	"MALUM","MALYA","MAMAK","MAMBO","MAMUL","MAMUR","MAMUT","MANAS","MANAT","MANAV","MANCA","MANÇU","MANDA","MANEJ","MANEN",
	"MANGA","MANGO","MANİA","MANTI","MANTİ","MANTO","MAOCU","MAPUS","MARAL","MARAZ","MARDA","MARİZ","MARKA","MARKE","MARKİ",
	"MARON","MARTI","MARUF","MARUL","MARUZ","MARYA","MASAJ","MASAL","MASAT","MASİF","MASKE","MASNU","MASON","MASÖR","MASÖZ",
	"MASTI","MASUM","MASUN","MAŞER","MAŞUK","MATAH","MATBU","MATEM","MATİZ","MATLA","MATUF","MATUH","MAVAL","MAVİŞ","MAVNA",
	"MAVRA","MAYIN","MAYIS","MAYNA","MAZAK","MAZOT","MAZUR","MEBDE","MEBİZ","MEBNİ","MEBUS","MECAL","MECAZ","MECMU","MECRA",
	"MECUS","MEDAR","MEDET","MEDİH","MEDÜZ","MEDYA","MEFUL","MEĞER","MEHAZ","MEHDİ","MEHİL","MEHLE","MEKAN","MEKİK","MELAL",
	"MELAS","MELCE","MELEK","MELES","MELEŞ","MELEZ","MELİK","MELON","MELUL","MELUN","MEMAT","MEMBA","MEMNU","MEMUL","MEMUR",
	"MENFA","MENFİ","MENŞE","MENUS","MERAK","MERAM","MERCİ","MEREK","MERES","MERET","MERİÇ","MERİH","MERMİ","MESAİ","MESAJ",
	"MESEL","MESEN","MESİH","MESMU","MESUL","MESUT","MEŞBU","MEŞİN","MEŞRU","MEŞUM","METAL","METAN","METBU","METİL","METİN",
	"METİS","METOT","METRE","METRO","MEVDU","MEVKİ","MEVLA","MEVTA","MEVUT","MEVZİ","MEVZU","MEYAN","MEYİL","MEYUS","MEYVE",
	"MEZAR","MEZAT","MEZON","MEZRA","MEZRU","MEZUN","MEZÜR","MEZZO","MICIR","MIGIR","MIGRİ","MIHLI","MIRRA","MISIR","MISRA",
	"MİÇEL","MİDYE","MİKAP","MİKOZ","MİKRO","MİLAS","MİLAT","MİLEL","MİLİM","MİLİS","MİLLİ","MİMAR","MİMİK","MİMLİ","MİNİK",
	"MİNÖR","MİRAÇ","MİRAS","MİRAT","MİRZA","MİSAK","MİSAL","MİSEL","MİSİL","MİSİS","MİTİL","MİTOS","MİTOZ","MİYAR","MİYAV",
	"MİYAZ","MİYOM","MİYOP","MİZAÇ","MİZAH","MİZAN","MOBİL","MODEL","MODEM","MODÜL","MOĞOL","MOHER","MOLAS","MOLLA","MOLOZ",
	"MONAT","MONTE","MOPET","MORAL","MOREN","MORTO","MORUK","MOTEL","MOTİF","MOTOR","MOTTO","MOZAK","MÖBLE","MÖSYÖ","MUARE",
	"MUCİP","MUCİR","MUCİT","MUCUK","MUCUR","MUFLA","MUĞLA","MUHAL","MUHAT","MUHİK","MUHİL","MUHİP","MUHİT","MUJİK","MUKİM",
	"MUKNİ","MUKUS","MULAJ","MUMCU","MUMLU","MUMYA","MUNİS","MURAT","MURİS","MUSAP","MUSIR","MUSKA","MUSON","MUŞLU","MUŞTA",
	"MUŞTU","MUTAF","MUTAT","MUTÇU","MUTKİ","MUTLU","MUYLU","MUZIR","MUZİP","MUZSU","MÜBAH","MÜDÜR","MÜFİT","MÜFTÜ","MÜHİM",
	"MÜHRE","MÜHÜR","MÜJDE","MÜLGA","MÜLKİ","MÜMAS","MÜMİN","MÜNŞİ","MÜRAİ","MÜRİT","MÜRUR","MÜŞİR","MÜZİÇ","MÜZİK","NABIZ",
	"NACAK","NAÇAR","NAÇİZ","NADAN","NADAS","NADİM","NADİR","NAFİA","NAFİZ","NAFTA","NAĞME","NAHAK","NAHIR","NAHİF","NAHİV",
	"NAHOŞ","NAKDİ","NAKIS","NAKIŞ","NAKIZ","NAKİL","NAKİP","NAKİT","NAKLİ","NAKŞİ","NALAN","NALÇA","NALIN","NAMAZ","NAMLI",
	"NAMLU","NAMUS","NANAY","NANİK","NARİN","NASIL","NASIP","NASIR","NASİP","NASİR","NAŞİR","NATIR","NATUK","NATÜR","NAZAL",
	"NAZAR","NAZIM","NAZIR","NAZİK","NAZİL","NAZİR","NAZLI","NEBAT","NECAT","NECİP","NEDBE","NEDEN","NEDİM","NEFER","NEFES",
	"NEFHA","NEFİR","NEFİS","NEFİY","NEFTİ","NELER","NEHİR","NEHİY","NEKES","NEKRE","NEMÇE","NEMLİ","NEMSE","NESEP","NESİÇ",
	"NESİH","NESİL","NESİM","NESİR","NESNE","NEŞET","NEŞİR","NEVİR","NEYÇE","NEYSE","NEZİF","NEZİH","NEZİR","NEZLE","NISIF",
	"NİCEL","NİÇİN","NİFAK","NİĞDE","NİHAİ","NİHAN","NİKAH","NİKAP","NİKEL","NİMET","NİNNİ","NİPEL","NİSAİ","NİSAN","NİSAP",
	"NİSPİ","NİŞAN","NİTEL","NİYAZ","NİYET","NİZAM","NİZİP","NODUL","NODÜL","NOGAY","NOHUT","NOKRA","NOKTA","NONOŞ","NOTAM",
	"NOTER","NÖBET","NÖRON","NUKUT","NUMEN","NURLU","NUTUK","NÜANS","NÜFUS","NÜFUZ","NÜKTE","NÜKUL","NÜSHA","NÜZUL","OBERJ",
	"OBRUK","OCUMA","ODACI","ODALI","ODEON","ODSUZ","OFANS","OFLAZ","OFRİS","OFSET","OĞLAK","OĞLAN","OJELİ","OKAPİ","OKLUK",
	"OKSİT","OKTAN","OKTAV","OKUMA","OKUME","OLASI","OLÇUM","OLEİK","OLEİN","OLGUN","OLMAK","OLMAZ","OLMUŞ","OLURU","OMBRA",
	"OMLET","ONAMA","ONGEN","ONGUN","ONİKS","ONLAR","ONLUK","ONMAK","ONSUZ","OOSİT","OPERA","OPTİK","ORADA","ORALI","ORASI",
	"ORAYA","ORCİK","ORFOZ","ORGAN","ORGCU","ORİON","ORKİT","ORLON","ORMAN","ORTAÇ","ORTAK","ORTAM","ORTAY","ORTEZ","ORTOZ",
	"OTACI","OTAMA","OTÇUL","OTİST","OTİZM","OTLAK","OTLUK","OTSUL","OTSUZ","OVALI","OVMAÇ","OVMAK","OYACI","OYALI","OYDAŞ",
	"OYLUM","OYMAK","OYNAK","OYNAŞ","OZMOZ","OZUGA","ÖBÜRÜ","ÖDEME","ÖDLEK","ÖDÜNÇ","ÖĞLEN","ÖĞREK","ÖKSÜZ","ÖLÇEK","ÖLÇER",
	"ÖLÇME","ÖLÇÜM","ÖLÇÜN","ÖLÇÜŞ","ÖLÇÜT","ÖLGÜN","ÖLMEK","ÖLMEZ","ÖLMÜŞ","ÖNCEL","ÖNCÜL","ÖNDER","ÖNERİ","ÖNEZE","ÖNLEM",
	"ÖNLÜK","ÖNSEL","ÖPMEK","ÖRCİN","ÖRDEK","ÖREKE","ÖRGEN","ÖRGÜN","ÖRGÜT","ÖRMEK","ÖRNEK","ÖRTME","ÖRTÜK","ÖRTÜŞ","ÖRÜCÜ",
	"ÖRÜLÜ","ÖTEKİ","ÖTMEK","ÖTÜCÜ","ÖTÜRÜ","ÖVMEK","ÖVÜCÜ","ÖVÜNÇ","ÖZALP","ÖZBEK","ÖZDEK","ÖZDEN","ÖZDEŞ","ÖZEME","ÖZENÇ",
	"ÖZENİ","ÖZERK","ÖZGÜL","ÖZGÜN","ÖZGÜR","ÖZLEM","ÖZLÜK","ÖZNEL","ÖZSEL","PABUÇ","PAÇAL","PAÇOZ","PADOK","PAFTA","PAGAN",
	"PAHAL","PAKET","PALAN","PALAS","PALAZ","PALET","PALTO","PAMPA","PAMUK","PANDA","PANEL","PANİK","PAPAK","PAPAZ","PAPEL",
	"PARAF","PARÇA","PARKA","PARKE","PARPA","PARSA","PARTİ","PARYA","PASAJ","PASAK","PASÇI","PASİF","PASLI","PASÖR","PASTA",
	"PATAK","PATAL","PATEN","PATİK","PATOZ","PAUNT","PAYAN","PAYDA","PAYEN","PAYET","PAYLI","PAZAR","PAZEN","PEÇİÇ","PEDAL",
	"PEDER","PEKÇE","PELİN","PELİT","PELTE","PELÜR","PELÜŞ","PEMBE","PENÇE","PENES","PENGÖ","PENİS","PENSE","PENYE","PERDE",
	"PEREN","PERKİ","PERMA","PERMİ","PERON","PERUK","PERVA","PESEK","PESÜS","PEŞİN","PEŞLİ","PEŞTU","PETEK","PEYDA","PEYKE",
	"PIHTI","PINAR","PIRPI","PIRTI","PISMA","PİGME","PİKAJ","PİKAP","PİKET","PİLAV","PİLİÇ","PİLLİ","PİLOT","PİNEL","PİNES",
	"PİNTİ","PİPET","PİRİT","PİSİK","PİSİN","PİŞEK","PİŞİK","PİŞİM","PİŞME","PİŞTİ","PİTON","PİYAN","PİYAZ","PİYES","PİYON",
	"PİZZA","PLAKA","PLASE","PLATİ","PLATO","PLAZA","POKER","POLAR","POLAT","POLEN","POLİM","POLİP","POLİS","POLKA","POLÜM",
	"POMAK","POMAT","POMPA","PONJE","PONZA","POPÇU","PORNO","PORTE","PORTO","POSOF","POSTA","POŞET","POTAS","POTİN","POTUK",
	"POTUR","POYRA","PÖÇÜK","PRAFA","PRAYA","PRENS","PRESE","PROJE","PROVA","PRUVA","PUDRA","PUFLA","PULCU","PULLU","PULSU",
	"PULUÇ","PUMBA","PUNTO","PUSAT","PUSET","PUSLU","PUSMA","PUVAR","PÜNEZ","PÜREN","PÜRÜZ","PÜSÜR","PÜTÜR","RABIT","RACON",
	"RADAR","RADDE","RADON","RADYO","RAFİT","RAFLI","RAFYA","RAGBİ","RAHAT","RAHİM","RAHİP","RAHLE","RAHNE","RAKAM","RAKET",
	"RAKIM","RAKİK","RAKİP","RAKİT","RAKOR","RAKUN","RALLİ","RAMAK","RAMPA","RANDA","RANZA","RAPOR","RASAT","RASIT","RASPA",
	"RASYO","RATIP","RAUNT","RAYBA","RAYİÇ","REAYA","REBAP","RECEP","RECİM","REÇEL","REDİF","REFAH","REFİK","REFÜJ","REHİN",
	"REJİM","REKAT","REKİZ","REKOR","REMEL","REMİL","REMİZ","RENDE","RESEN","RESİF","RESİM","RESMİ","RESUL","REŞİT","REŞME",
	"REVAÇ","REVAK","REVAN","REVİR","REVİŞ","REYON","REZİL","RIZIK","RİCAL","RİCAT","RİJİT","RİMEL","RİNGA","RİTİM","RİYAL",
	"ROBOT","RODAJ","RODEO","ROKET","ROLCÜ","ROMAN","ROMEN","ROSTO","ROTİL","ROTOR","ROZET","RÖFLE","RÖGAR","RÖTAR","RÖTUŞ",
	"RUBAİ","RUBLE","RUFAİ","RUGAN","RUHÇA","RUHEN","RUHLU","RUJLU","RULET","RUMBA","RUMCA","RUMUZ","RUNİK","RUSÇA","RUTİN",
	"RÜESA","RÜKÜN","RÜKÜŞ","RÜSUM","RÜSUP","RÜSVA","RÜTBE","RÜYET","SABAH","SABAN","SABIK","SABIR","SABİT","SABUH","SABUN",
	"SABUR","SAÇAK","SAÇIK","SAÇIŞ","SAÇLI","SAÇMA","SADAK","SADET","SADIK","SADIR","SADİK","SADME","SAFÇA","SAFER","SAFHA",
	"SAFİR","SAFRA","SAĞCI","SAĞIM","SAĞIN","SAĞIR","SAĞMA","SAĞRI","SAHAF","SAHAN","SAHİH","SAHİL","SAHİP","SAHNE","SAHRA",
	"SAHRE","SAHTE","SAHUR","SAİKA","SAKAF","SAKAK","SAKAL","SAKAR","SAKAT","SAKIN","SAKIT","SAKIZ","SAKİL","SAKİM","SAKİN",
	"SAKİT","SAKLI","SAKSI","SALAH","SALAK","SALAM","SALAŞ","SALAT","SALCI","SALÇA","SALEP","SALGI","SALIK","SALİK","SALİM",
	"SALİP","SALLI","SALMA","SALON","SALOZ","SALPA","SALSA","SALTA","SALTO","SALUR","SALVO","SALYA","SAMAN","SAMBA","SAMSA",
	"SAMUR","SAMUT","SANAL","SANAT","SANCI","SANEM","SANGI","SANIK","SANIŞ","SANKİ","SANLI","SANMA","SANRI","SAPAK","SAPAN",
	"SAPIK","SAPIŞ","SAPKI","SAPLI","SAPMA","SARAÇ","SARAK","SARAT","SARAY","SARGI","SARIK","SARIM","SARIŞ","SARIZ","SARİG",
	"SARİH","SARMA","SARPA","SASON","SATEN","SATHİ","SATIH","SATIM","SATIR","SATIŞ","SATİR","SATMA","SAUNA","SAVAK","SAVAN",
	"SAVAŞ","SAVAT","SAVCA","SAVCI","SAVLA","SAVLO","SAVMA","SAVUR","SAYAÇ","SAYFA","SAYGI","SAYHA","SAYIM","SAYIN","SAYIŞ",
	"SAYMA","SAYRI","SAZAK","SAZAN","SAZCI","SAZLI","SEANS","SEBAT","SEBEN","SEBEP","SEBİL","SEBZE","SECDE","SEÇAL","SEÇİM",
	"SEÇİŞ","SEÇKİ","SEÇME","SEDEF","SEDİR","SEDYE","SEFER","SEFİH","SEFİL","SEFİR","SEGAH","SEHER","SEHİM","SEHİV","SEHPA",
	"SEKEL","SEKİL","SEKİŞ","SEKİZ","SEKME","SEKSİ","SEKTE","SELAM","SELEF","SELEK","SELEN","SELİM","SELİS","SELVA","SELVİ",
	"SEMAH","SEMAİ","SEMAN","SEMEN","SEMER","SEMİH","SEMİZ","SENCE","SENEK","SENET","SENİR","SENİT","SEPEK","SEPET","SEPYA",
	"SERAK","SERAP","SERÇE","SEREN","SERGİ","SERİK","SERİM","SERİN","SERİŞ","SERME","SERUM","SERVİ","SESÇİ","SESLİ","SETER",
	"SETİK","SETİR","SETRE","SEVAP","SEVDA","SEVER","SEVGİ","SEVİM","SEVİR","SEVİŞ","SEVME","SEYEK","SEYİR","SEYİS","SEYİT",
	"SEZGİ","SEZİŞ","SEZME","SEZON","SICAK","SIÇAN","SIÇMA","SIFAT","SIFIR","SIĞIN","SIĞIR","SIĞLA","SIĞMA","SIHHİ","SIHRİ",
	"SIKÇA","SIKIM","SIKIT","SIKMA","SIMAK","SINAİ","SINAV","SINDI","SINIF","SINIK","SINIR","SINMA","SIRAT","SIRCI","SIRÇA",
	"SIRIK","SIRIM","SIRLI","SIRMA","SISKA","SITMA","SIVIK","SIYGA","SIYGI","SIZAK","SIZIŞ","SIZMA","SİBOP","SİCİL","SİCİM",
	"SİDİK","SİFİN","SİFON","SİGAR","SİĞİL","SİHİR","SİİRT","SİKKE","SİKME","SİLAH","SİLAJ","SİLGİ","SİLİK","SİLİS","SİLİŞ",
	"SİLKİ","SİLLE","SİLME","SİMAV","SİMGE","SİMİT","SİMYA","SİNEK","SİNİK","SİNİR","SİNİŞ","SİNLE","SİNME","SİNOP","SİNSİ",
	"SİNÜS","SİPER","SİPSİ","SİREN","SİRKE","SİRMO","SİROZ","SİRTO","SİSLİ","SİTEM","SİTİL","SİVAS","SİVİL","SİVRİ","SİYAH",
	"SİYAK","SİYEK","SİYER","SİYME","SİZCE","SKALA","SKİNK","SLAYT","SOFRA","SOFTA","SOĞAN","SOĞUK","SOKAK","SOKET","SOKMA",
	"SOKRA","SOKUM","SOKUR","SOKUŞ","SOLAK","SOLCU","SOLMA","SOLUK","SOLUŞ","SOMAK","SOMON","SOMUN","SOMUT","SOMYA","SONAR",
	"SONAT","SONDA","SONLU","SONRA","SONUÇ","SORGU","SORİT","SORMA","SORTİ","SORUM","SORUN","SORUŞ","SOSİS","SOYKA","SOYLU",
	"SOYMA","SOYUM","SOYUŞ","SOYUT","SÖĞÜŞ","SÖĞÜT","SÖKEL","SÖKME","SÖKÜK","SÖKÜM","SÖKÜN","SÖKÜŞ","SÖLOM","SÖNME","SÖNÜK",
	"SÖNÜM","SÖNÜŞ","SÖVEN","SÖVGÜ","SÖVME","SÖVÜŞ","SÖZCE","SÖZCÜ","SÖZDE","SÖZEL","SÖZLÜ","SPAZM","SPERM","SPREY","STANT",
	"STATÜ","STENO","STENT","STİLO","STREÇ","STRES","SUARE","SUBAY","SUBRA","SUBYE","SUCUK","SUCUL","SUÇLU","SUDAK","SUDAN",
	"SUFLE","SUKUT","SULAK","SULTA","SULUK","SUMAK","SUNAK","SUNGU","SUNMA","SUNTA","SUNUM","SUNUŞ","SUOKU","SUPAP","SURAT",
	"SURET","SURUÇ","SUSAK","SUSAM","SUSKU","SUSMA","SUSTA","SUSUŞ","SUSUZ","SUTAŞ","SUTLU","SUVAT","SUYUK","SÜBEK","SÜBUT",
	"SÜBYE","SÜCUT","SÜFLİ","SÜĞME","SÜKSE","SÜKUN","SÜKUT","SÜLUK","SÜLÜK","SÜLÜN","SÜLÜS","SÜMEK","SÜMEN","SÜMER","SÜMÜK",
	"SÜNGÜ","SÜNME","SÜNNİ","SÜPER","SÜRAT","SÜREÇ","SÜREK","SÜRFE","SÜRGÜ","SÜRME","SÜRRE","SÜRUR","SÜRÜM","SÜRÜŞ","SÜSEN",
	"SÜSLÜ","SÜSME","SÜTÇÜ","SÜTLÜ","SÜTRE","SÜTSÜ","SÜTUN","SÜVEN","SÜVME","SÜYEK","SÜYÜM","SÜZEK","SÜZGÜ","SÜZME","SÜZÜK",
	"SÜZÜŞ","ŞABAN","ŞAFAK","ŞAFİİ","ŞAFUL","ŞAHAP","ŞAHIS","ŞAHİN","ŞAHİT","ŞAHNE","ŞAHSİ","ŞAİBE","ŞAİRE","ŞAKAK","ŞAKUL",
	"ŞALAK","ŞAMAN","ŞAMAR","ŞAMİL","ŞANLI","ŞAPÇI","ŞAPEL","ŞAPKA","ŞAPLI","ŞARAP","ŞARKI","ŞARKİ","ŞARPİ","ŞARYO","ŞAŞAA",
	"ŞAŞMA","ŞATIR","ŞAVUL","ŞAYAK","ŞAYAN","ŞAYET","ŞAYİA","ŞAYKA","ŞEBEK","ŞEDDE","ŞEDİT","ŞEFİK","ŞEHİR","ŞEHİT","ŞEHLA",
	"ŞEKEL","ŞEKER","ŞEKİL","ŞEKLİ","ŞEKVA","ŞELEK","ŞEMSE","ŞEMSİ","ŞEPİT","ŞERAN","ŞEREF","ŞERHA","ŞERİF","ŞERİK","ŞERİR",
	"ŞERİT","ŞERPA","ŞETİM","ŞINAV","ŞIPKA","ŞIRAK","ŞİFON","ŞİFRE","ŞİKAR","ŞİLEM","ŞİLEP","ŞİLİN","ŞİLTE","ŞİMAL","ŞİMDİ",
	"ŞİNİK","ŞİNTO","ŞİRAN","ŞİRİN","ŞİŞEK","ŞİŞİK","ŞİŞKO","ŞİŞLİ","ŞİŞME","ŞOFÖR","ŞOPAR","ŞORCA","ŞOSET","ŞOSON","ŞOVEN",
	"ŞÖLEN","ŞÖMİZ","ŞÖYLE","ŞUARA","ŞUBAT","ŞUHUT","ŞUNCA","ŞURUP","ŞÜKÜR","ŞÜMUL","ŞÜPHE","TABAK","TABAN","TABİİ","TABİP",
	"TABİR","TABLA","TABLO","TABUR","TABUT","TABYA","TACİK","TACİL","TACİR","TACİZ","TAÇLI","TADAT","TADIM","TADİL","TAFRA",
	"TAFTA","TAHIL","TAHİN","TAHRA","TAHTA","TAKAS","TAKAT","TAKIK","TAKIM","TAKİM","TAKİP","TAKKE","TAKLA","TAKMA","TAKOZ",
	"TAKSA","TAKSİ","TAKTİ","TAKVA","TALAK","TALAN","TALAS","TALAŞ","TALAZ","TALEP","TALİH","TALİK","TALİL","TALİM","TALİP",
	"TAMAH","TAMAM","TAMİK","TAMİM","TAMİR","TANEN","TANGO","TANIK","TANIM","TANIŞ","TANIT","TANİN","TANRI","TAOCU","TAPAN",
	"TAPIŞ","TAPİR","TAPMA","TAPON","TARAF","TARAK","TARAŞ","TARAZ","TARET","TARIM","TARİF","TARİH","TARİK","TARİZ","TARLA",
	"TARTI","TASAR","TASDİ","TASIM","TASMA","TASNİ","TAŞAK","TAŞÇI","TAŞIL","TAŞIM","TAŞIT","TAŞLI","TAŞMA","TAŞRA","TAŞSI",
	"TATAR","TATİL","TATLI","TATMA","TAVAF","TAVAN","TAVAS","TAVCI","TAVIR","TAVİK","TAVİZ","TAVLA","TAVLI","TAVUK","TAVUS",
	"TAYFA","TAYGA","TAYIN","TAYİN","TAYİP","TAZİM","TAZİP","TAZİZ","TEALİ","TEATİ","TEBAA","TEBER","TECİL","TECİM","TEDAİ",
	"TEDİP","TEĞET","TEHİR","TEİST","TEİZM","TEKÇİ","TEKEL","TEKER","TEKİL","TEKİN","TEKİR","TEKİT","TEKKE","TEKLİ","TEKME",
	"TEKNE","TEKST","TELAŞ","TELEF","TELEK","TELEM","TELES","TELİF","TELİN","TELİS","TELLİ","TELSİ","TELVE","TEMAS","TEMEK",
	"TEMEL","TEMİN","TEMİZ","TEMPO","TENGE","TENHA","TENİS","TENOR","TENTE","TENYA","TEORİ","TEPİK","TEPİR","TEPİŞ","TEPKE",
	"TEPKİ","TEPME","TEPSİ","TERAS","TERBİ","TEREK","TERES","TERFİ","TERİM","TERKİ","TERLİ","TERME","TERÖR","TERZİ","TESİR",
	"TESİS","TESİT","TESRİ","TESTİ","TEŞCİ","TEŞNE","TEŞRİ","TEŞYİ","TETİK","TETİR","TEVDİ","TEVEK","TEVİL","TEVKİ","TEVSİ",
	"TEVZİ","TEYEL","TEYİT","TEYZE","TEZAT","TEZCE","TEZEK","TEZLİ","TIBBİ","TIFIL","TIKAÇ","TIKIM","TIKIR","TIKIZ","TIKMA",
	"TIMAR","TINAZ","TINMA","TIPKI","TIRAK","TIRAŞ","TIRIK","TIRIL","TIRIS","TİFÜS","TİKEL","TİLKİ","TİMÜS","TİNER","TİPİK",
	"TİRAJ","TİRAN","TİRAT","TİRİT","TİRİZ","TİRLE","TİRSİ","TİRŞE","TİTAN","TİTİZ","TOHUM","TOKAÇ","TOKAT","TOKLU","TOKUZ",
	"TOKYO","TOLGA","TOMAK","TOMAR","TONAJ","TONER","TONGA","TONİK","TONLA","TONLU","TONOZ","TONYA","TOPAÇ","TOPAK","TOPAL",
	"TOPAZ","TOPÇU","TOPİK","TOPLA","TOPLU","TOPUK","TOPUR","TOPUT","TOPUZ","TORAK","TORBA","TORİK","TORNA","TORTU","TORUL",
	"TORUM","TORUN","TOSUN","TOSYA","TOTAL","TOTEM","TOYCA","TOYCU","TOYGA","TOZAN","TOZLU","TOZMA","TÖREL","TÖREN","TÖRPÜ",
	"TÖVBE","TÖZEL","TRAFO","TRAKE","TRANS","TRANŞ","TRATA","TRİKO","TROMP","TRÖST","TUFAN","TUGAY","TUĞCU","TUĞLA","TUĞLU",
	"TUĞRA","TUHAF","TULUK","TULUM","TULUP","TUMAN","TUMBA","TUNİK","TURAÇ","TURAN","TURBA","TURBO","TURFA","TURNA","TURNE",
	"TURNO","TURŞU","TURTA","TUTAÇ","TUTAK","TUTAM","TUTAR","TUTKU","TUTMA","TUTUK","TUTUM","TUTUŞ","TUTYA","TUVAL","TUYUĞ",
	"TUZAK","TUZCU","TUZLA","TUZLU","TUZSU","TÜFEK","TÜMCE","TÜMEL","TÜMEN","TÜMEY","TÜMÖR","TÜMÜR","TÜNEK","TÜNEL","TÜNME",
	"TÜPÇÜ","TÜPLÜ","TÜRAP","TÜRBE","TÜREL","TÜREV","TÜRKİ","TÜRKÜ","TÜRLÜ","TÜRÜM","TÜTME","TÜTSÜ","TÜTÜN","TÜVİT","TÜYLÜ",
	"TÜYME","TÜZEL","TÜZÜK","TVİST","UCUBE","UÇARI","UÇKUN","UÇKUR","UÇMAK","UÇMAN","UÇSUZ","UÇUCU","UĞRAK","UĞRAŞ","UĞRUN",
	"UKALA","UKNUM","ULAMA","ULEMA","ULUFE","ULUMA","UMACI","UMMAK","UMMAN","UMUMİ","UNLUK","UNSUR","UNVAN","URBAN","URGAN",
	"USANÇ","USARE","USKUR","USSAL","UŞKUN","UŞŞAK","UTANÇ","UTMAK","UYARI","UYGAR","UYGUN","UYGUR","UYLUK","UYMAK","UYMAZ",
	"UYRUK","UYSAL","UYUMA","UZAMA","UZLET","UZLUK","UZMAN","ÜCRET","ÜÇGEN","ÜÇGÜL","ÜÇKAT","ÜÇLER","ÜÇLÜK","ÜÇTAŞ","ÜDEBA",
	"ÜFLEÇ","ÜĞRÜM","ÜLFET","ÜLGER","ÜLKER","ÜLSER","ÜMERA","ÜMMET","ÜMRAN","ÜNDEŞ","ÜNİTE","ÜNLEM","ÜNSÜZ","ÜREME","ÜREMİ",
	"ÜRGÜP","ÜRKEK","ÜRKME","ÜRKÜŞ","ÜRÜME","ÜRYAN","ÜSERA","ÜSKÜF","ÜSLUP","ÜSTAT","ÜSTEL","ÜSTLÜ","ÜSTÜN","ÜŞENÇ","ÜŞMEK",
	"ÜŞÜME","ÜTMEK","ÜTÜCÜ","ÜTÜLÜ","ÜZERE","ÜZERİ","ÜZGÜN","ÜZLÜK","ÜZMEK","ÜZÜCÜ","ÜZÜNÇ","VACİP","VAGON","VAHİM","VAHİT",
	"VAHİY","VAHŞİ","VAKAR","VAKFE","VAKIA","VAKIF","VAKİT","VAKUM","VAKUR","VALİZ","VALÖR","VANLI","VAPUR","VARAK","VARAN",
	"VARDA","VARGI","VARIŞ","VARİL","VARİS","VARİT","VARMA","VAROŞ","VARTA","VARTO","VASAT","VASIF","VASIL","VAŞAK","VATAN",
	"VATKA","VATOZ","VAZIH","VEBAL","VECİH","VECİZ","VEÇHE","VEDİA","VEFAT","VEHİM","VEKİL","VELET","VELUR","VELUT","VENÜS",
	"VERDİ","VEREM","VEREV","VERGİ","VERİM","VERİŞ","VERİT","VERME","VEZİN","VEZİR","VEZNE","VICIK","VİDEO","VİGLA","VİLLA",
	"VİRAJ","VİRAL","VİRAN","VİRÜS","VİSAL","VİSKİ","VİŞNE","VİTES","VİTİR","VİYAK","VİYOL","VİZON","VİZÖR","VOKAL","VOLAN",
	"VOLTA","VONOZ","VOTKA","VOYVO","VUKUF","VULVA","VURAÇ","VURGU","VURMA","VURUK","VURUŞ","VUSUL","VUZUH","VÜCUT","VÜRUT",
	"VÜSAT","YABAN","YABGU","YAFTA","YAĞAR","YAĞCI","YAĞIR","YAĞIŞ","YAĞIZ","YAĞLI","YAĞMA","YAĞSI","YAHEY","YAHNİ","YAHŞİ",
	"YAHUT","YAKIM","YAKIN","YAKIŞ","YAKIT","YAKİN","YAKMA","YAKUT","YALAK","YALAN","YALAZ","YALIM","YALIN","YALIZ","YALPA",
	"YALPI","YAMAÇ","YAMAK","YAMAN","YAMÇI","YAMUK","YANAK","YANAL","YANAY","YANAZ","YANCI","YANGI","YANIK","YANIŞ","YANIT",
	"YANKI","YANLI","YANMA","YANSI","YAPAK","YAPAY","YAPIK","YAPIM","YAPIŞ","YAPIT","YAPMA","YARAK","YARAN","YARAR","YARAŞ",
	"YARDA","YAREN","YARGI","YARIK","YARIM","YARIN","YARIŞ","YARKA","YARMA","YASAK","YASAL","YASİN","YASLI","YASMA","YASSI",
	"YAŞAM","YAŞÇA","YAŞIT","YAŞLI","YATAK","YATAY","YATÇI","YATIK","YATIM","YATIR","YATIŞ","YATMA","YATSI","YAVAN","YAVAŞ",
	"YAVER","YAVRU","YAVSI","YAVUZ","YAYAN","YAYGI","YAYIK","YAYIM","YAYIN","YAYIŞ","YAYLA","YAYLI","YAYMA","YAZAR","YAZGI",
	"YAZIK","YAZIM","YAZIN","YAZIR","YAZIŞ","YAZIT","YAZMA","YEDEK","YEDİZ","YEDME","YEGAH","YEGAN","YEĞEN","YEĞİN","YEĞNİ",
	"YEKTA","YEKUN","YELEÇ","YELEK","YELİN","YELLİ","YELME","YELVE","YEMCİ","YEMEK","YEMİN","YEMİŞ","YENGE","YENGİ","YENİK",
	"YENLİ","YENME","YEREL","YEREY","YERGİ","YERLİ","YERME","YEŞİL","YEŞİM","YETER","YETİK","YETİM","YETKE","YETKİ","YETME",
	"YEVMİ","YEYGİ","YEZİT","YIĞIN","YIĞIŞ","YIĞMA","YIKIK","YIKIM","YIKIŞ","YIKMA","YILAN","YILGI","YILIK","YILKI","YILMA",
	"YIRIK","YİĞİT","YİRİK","YİRMİ","YİTİK","YİTİM","YİTİŞ","YİTME","YİVLİ","YİYİM","YİYİŞ","YOBAZ","YOĞUN","YOKÇU","YOKSA",
	"YOKUŞ","YOLAK","YOLCU","YOLLU","YOLMA","YOLUK","YOMRA","YONCA","YONGA","YONMA","YONTU","YORGA","YORMA","YORTU","YORUM",
	"YOSMA","YOSUN","YÖNLÜ","YÖRÜK","YUDUM","YUFKA","YUKAÇ","YULAF","YULAR","YUMAK","YUMMA","YUMRU","YUMUK","YUNAK","YUNAN",
	"YUNMA","YUNUS","YURDU","YUTAK","YUTMA","YUTUM","YUTUŞ","YUVAK","YUVAR","YUVGU","YÜKÇÜ","YÜKLÜ","YÜKÜM","YÜKÜN","YÜLGÜ",
	"YÜLÜK","YÜNLÜ","YÜREK","YÜRÜK","YÜSRÜ","YÜZDE","YÜZER","YÜZEY","YÜZLÜ","YÜZME","YÜZÜK","YÜZÜŞ","ZABIT","ZABİT","ZAFER",
	"ZAĞAR","ZAĞCI","ZAĞLI","ZAHİR","ZAHİT","ZALİM","ZAMAN","ZAMİR","ZAMLI","ZAMME","ZANKA","ZANLI","ZARAR","ZARCI","ZARİF",
	"ZARSI","ZARTA","ZATEN","ZAYIF","ZEBAN","ZEBRA","ZEBUN","ZEBUR","ZECİR","ZECRİ","ZEFİR","ZEHAP","ZEHİR","ZEKAT","ZEKER",
	"ZELİL","ZELVE","ZEMİN","ZENCİ","ZENNE","ZERDE","ZERRE","ZEVAL","ZEVAT","ZEVCE","ZEYİL","ZIBIN","ZIHLI","ZIMBA","ZIMNİ",
	"ZIPIR","ZIPKA","ZIRVA","ZİFAF","ZİFİN","ZİFİR","ZİFOS","ZİGON","ZİGOT","ZİHAF","ZİHİN","ZİHNİ","ZİKİR","ZİLLİ","ZİMMİ",
	"ZİNDE","ZİRAİ","ZİRVE","ZİYAN","ZLOTİ","ZOMBİ","ZORBA","ZORCA","ZORGU","ZORLA","ZORLU","ZORUN","ZUHUR","ZULÜM","ZURNA",
	"ZÜBDE","ZÜHAL","ZÜHRE","ZÜHUL","ZÜKAM","ZÜLAL","ZÜLÜF","ZÜMRE","ZÜPPE","ZÜRRA",
	};
	char dizibos[24];	//harflerin tutuldugu gecici dizi
	char diziyesil[5];	//yesil harfler
	char dizisari[5];	//sari harfler
	char dizisiyah[24];	//siyah harfler
	char dizisiyahvar[24];	
	int diziyesil1[5];	//yesil harflerin indisleri
	int dizisari1[5];	//sari harflerin indisleri
	int yhs,shs,sihs; //harf sayıları
	int ys=0,ss=0,sis=0,sis2=0; //dizilerin son kaldıgı yer
	printf("Rastgele kelime onerisi : ");
	b=rand()%3035;  //Rastgele Kelime
	c=rand()%3035;  //Rastgele Kelime
	fark(dizi,c);   //Rastgele Kelime
	while(x<5)
	{
		a=ys;		
		printf("Yesil harf sayisini girin\t");
		scanf("%d",&yhs);
		if(yhs>0 && toplam<5)
		{
			yesilharfsayisi2 += yhs;
			toplam=yesilharfsayisi2;
			toplam=yesilharfsayisi2;
			printf("Yesil harfleri girin\t");
			scanf("%s",dizibos);
			for(i=0;i<yhs;i++)
			{
				
				z=dizibos[i];
				switch(z)
				{
					case -128: dizibos[i] = 'Ç'; break;
				    case -90: dizibos[i] = 'Ğ'; break;
				    case -104: dizibos[i] = 'İ'; break;
				    case -103: dizibos[i] = 'Ö'; break;
				    case -98: dizibos[i] = 'Ş'; break;
				    case -102: dizibos[i] = 'Ü'; break;
				    case -121: dizibos[i] = 'ç'; break;
				    case -89: dizibos[i] = 'ğ'; break;
				    case -115: dizibos[i] = 'ı'; break;
				    case -108: dizibos[i] = 'ö'; break;
				    case -97: dizibos[i] = 'ş'; break;
				    case -127: dizibos[i] = 'ü'; break;
				}
				printf("Yeşil harfin indisini girin\t");
				scanf("%d",&diziyesil1[ys]);
				diziyesil[ys]=dizibos[i];
				
				ys++;
			}
			dizisil(dizibos);
			toUpper(diziyesil);
			harfiBilinenKelime(dizi,diziyesil,diziyesil1,yhs,a);
			yhs=0;
			
		}
		else if (toplam>=5)
		{
			printf("Aradığınız kelimeyi buldunuz");
		}
		else
		{
			toplam=yesilharfsayisi2;
		}
		if(toplam<5)
		{
			printf("Siyah harf sayisini girin\t");
			scanf("%d",&sihs);
		}
		if(sihs>0 && toplam<5)
		{
			toplam+=sihs;
			printf("Siyah Harfleri girin\t");
			scanf("%s",dizibos);
			toUpper(dizibos);
			for(i=0;i<strlen(dizibos);i++)
			{
				
				z=dizibos[i];
				switch(z)
				{
					case -128: dizibos[i] = 'Ç'; break;
				    case -90: dizibos[i] = 'Ğ'; break;
				    case -104: dizibos[i] = 'İ'; break;
				    case -103: dizibos[i] = 'Ö'; break;
				    case -98: dizibos[i] = 'Ş'; break;
				    case -102: dizibos[i] = 'Ü'; break;
				    case -121: dizibos[i] = 'ç'; break;
				    case -89: dizibos[i] = 'ğ'; break;
				    case -115: dizibos[i] = 'ı'; break;
				    case -108: dizibos[i] = 'ö'; break;
				    case -97: dizibos[i] = 'ş'; break;
				    case -127: dizibos[i] = 'ü'; break;
				}
					for(k=0;k<strlen(diziyesil);k++)
					{
						if(dizibos[i]!=diziyesil[k])
						{
							d=1;
							
						}
						else
						{
							dizisiyahvar[sis2]=dizibos[i];
							siyah2(dizi,dizisiyahvar,strlen(dizisiyahvar),diziyesil1[k],sis2);
							sis2++;
							d=0;
							break;
						}
					}
					if(d==1)
					{
						dizisiyah[sis]=dizibos[i];
						sis++;
					}
				}
			dizisil(dizibos);
			harfiOlmayanKelime(dizi,dizisiyah,sis);
			sihs=0;
		}
		shs=5-toplam;
		if(shs>0 && toplam<5)
		{
			toplam+=shs;
			printf("Sarı Harfleri girin\t");
			scanf("%s",dizibos);
			for(i=0;i<shs;i++)
			{
				z=dizibos[i];
				switch(z)
				{
					case -128: dizibos[i] = 'Ç'; break;
				    case -90: dizibos[i] = 'Ğ'; break;
				    case -104: dizibos[i] = 'İ'; break;
				    case -103: dizibos[i] = 'Ö'; break;
				    case -98: dizibos[i] = 'Ş'; break;
				    case -102: dizibos[i] = 'Ü'; break;
				    case -121: dizibos[i] = 'ç'; break;
				    case -89: dizibos[i] = 'ğ'; break;
				    case -115: dizibos[i] = 'ı'; break;
				    case -108: dizibos[i] = 'ö'; break;
				    case -97: dizibos[i] = 'ş'; break;
				    case -127: dizibos[i] = 'ü'; break;
				}
				printf("Sarı harfin indisini girin\t");
				scanf("%d",&dizisari1[ss]);
				dizisari[ss]=dizibos[i];
				ss++;
			}
			dizisil(dizibos);
			toUpper(dizisari);
			yeribilinmiyenharf(dizi,dizisari,dizisari1,shs,f);
			shs=0;
		}
		toplam=0;
		system("CLS");
		for(i=0;(dizi[i][0]!=' ')&&(dizi[i][0]!='\0');i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%c",dizi[i][j]);
			}
			if((i+1)%12==0)
			{
				printf("\n");
			}
			else
			{
				printf("\t");
			}
			yok++;
		}
		if(yok==0)
		{
			x=5;
			printf("BÖYLE BİR KELİME BULUNAMADI!!!");
		}
		printf("\n");
		yok=0;
		x++;
	}
	getch();//Ekran kapanmasın diye
}
// Kullanıcıdan alınan girdi harfi mi, sayı mı ?
