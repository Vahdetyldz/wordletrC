#include<stdio.h>
#include<locale>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
void toUpper(char dizi[])
{
	int i,j;
	char dizibuyuk[]="ABC�DEFG�HI�JKLMNO�PRS�TU�VYZ";
	char dizikucuk[]="abc�defg�h�ijklmno�prs�tu�vyz";
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
void fark(char dz[][6],int r) //Harfleri farkl� rastgele bir kelime
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
void harfiBilinenKelime(char dz[][6],char dzy[],int dzys[],int yhsayi,int b)     //Ye�il Harf
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
void yeribilinmiyenharf(char dz[][6],char dz1[],int konum[],int sarih,int saris) //Sar� Harf
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
	char dizi[5183][6] = { "ABACI","ABAD�","ABALI","ABANA","ABAN�","ABA�O","ABAZA","ABBAS","ABDAL","ABECE","ABHAZ","AB�DE",
	"AB�YE","ABLAK","ABONE","ABOSA","ABRA�","ABUL�","ACABA","ACARA","ACELE","ACEM�","ACEZE","ACICA","ACILI","ACIMA","AC�BE",
	"ACUBE","ACUZE","A�G�Z","A�LIK","A�MAK","A�MAZ","ADALE","ADALI","ADAMA","ADANA","ADED�","ADESE","ADETA","ADINA","ADRES",
	"ADSAL","ADSIZ","AFAK�","AFAZ�","AFGAN","AF�FE","AF�L�","AF��E","AFON�","AFSUN","AF�AR","AF��N","AFTOS","AFYON","AGAM�",
	"AGORA","AGRAF","A�CIK","A�ILI","A�LAK","A�MAK","A�NAM","A�RAZ","A�YAR","AHAL�","AHBAP","AHCAR","AHENK","AHFAT","AHFE�",
	"AH�ZE","AHKAM","AHLAF","AHLAK","AHLAT","AHMAK","AHRAZ","AH�AP","AHVAL","A�DAT","AJANS","AJ�TE","AKABE","AKA�T","AKAJU",
	"AKALA","AKBA�","AK�IL","AKDUT","AKEM�","AKICI","AK�DE","AKKOR","AKK�Y","AKKU�","AKLAN","AKLEN","AKLIK","AKMAK","AKMAN",
	"AKMAZ","AKONT","AKORT","AKPAS","AKRAN","AKREP","AKSAK","AKSAM","AKSAN","AKSON","AK�AM","AK�IN","AKTAR","AKTA�","AKT�F",
	"AKT�R","AKVAM","ALACA","ALAKA","ALARM","ALAZA","ALBAY","ALB�M","AL�AK","ALEN�","ALEV�","ALEYH","ALGIN","ALICI","AL�ZE",
	"ALKAN","ALKIM","ALKI�","ALK�L","ALKOL","ALLAH","ALLEM","ALLIK","ALMA�","ALMAK","ALMAN","ALMA�","ALMUS","ALNA�","ALTES",
	"ALTIK","ALTIN","ALTIZ","ALTLI","ALYAN","ALYON","AMADE","AMBAR","AMBER","AMELE","AMEL�","AM�GO","AMORF","AMPER","AMP�R",
	"AMPUL","AMUD�","ANACA","ANALI","ANANE","ANCAK","ANDA�","ANDI�","ANDIK","ANDIZ","ANELE","ANEM�","ANGI�","ANGIN","ANGUT",
	"AN�DE","AN�ME","ANJ�N","ANKET","ANLAK","ANLAM","ANLIK","ANMAK","ANONS","ANSIZ","ANTEN","ANTET","ANT�K","ANTLI","ANTRE",
	"AN�R�","ANYON","ANZAK","APACI","AP�KO","APL�K","APORT","APO��","APOTR","APR�L","APS�S","APTAL","ARABA","ARAB�","ARACI",
	"ARAKA","ARALI","ARAMA","ARAM�","ARAZ�","ARDAK","ARDI�","ARDIL","ARENA","ARGA�","ARGIN","ARGIT","ARGON","ARICI","ARIZA",
	"ARIZ�","AR�FE","AR�YA","AR�ZA","ARKA�","ARKIT","ARKOZ","ARMUT","ARMUZ","AROMA","ARP�I","ARPEJ","ARSIZ","ARS�N","AR�IN",
	"AR��V","ART�I","ARTER","ARTIK","ARTIM","ARTIN","ARTI�","ARTMA","ASAB�","ASHAP","ASILI","AS�DE","AS�ST","ASKAT","ASKER",
	"ASKLI","ASLAN","ASLEN","ASLIK","ASMAK","ASPUR","ASTAR","ASTAT","ASTIM","AST�K","ASUDE","ASY�N","A�A�I","A�AMA","A�AR�",
	"A�EV�","A�ICI","A�ILI","A�IRI","A��NA","A�KIN","A�LIK","A�MAK","A�URE","ATAMA","ATAR�","ATA�E","ATFEN","ATICI","ATILI",
	"ATLAS","ATLET","ATMAK","ATMIK","AVANE","AVANS","AVARA","AVARE","AVAZE","AVDET","AV�ZE","AVLAK","AVRAT","AVRET","AV�AR",
	"AVUN�","AVURT","AYDIN","AYEV�","AYGIR","AYGIT","AYICI","AYIRT","AYLAK","AYLIK","AYMAK","AYMAZ","AYNAZ","AYNEN","AYRA�",
	"AYRAN","AYRI�","AYRIK","AYRIM","AYRIT","AYSAR","AYSIZ","AYVAN","AYVAZ","AYYAR","AYYA�","AYYUK","AZADE","AZAM�","AZER�",
	"AZGIN","AZILI","AZ�ZE","AZLIK","AZMAK","AZMAN","AZN�F","AZO�K","AZVAY","BABA�","BABA�","BACAK","BA��I","BADAL","BADAS",
	"BADAT","BADEM","BADI�","BAD�K","BADYA","BAFRA","BAGAJ","BAGET","BA�AN","BA�CI","BA�DA","BA�IL","BA�IM","BA�IN","BA�IR",
	"BA�I�","BA�IT","BA�LI","BAHA�","BAHAR","BAH�E","BAH�R","BAH�S","BAHR�","BAKA�","BAKAM","BAKAN","BAKIM","BAKIR","BAKI�",
	"BAK�R","BAKLA","BAKMA","BALAR","BALAT","BALCI","BALDO","BALET","BALIK","BAL��","BALKI","BALLI","BALON","BALOZ","BALTA",
	"BALYA","BAMBU","BAMYA","BANAK","BANAL","BANAZ","BANDO","BANJO","BANKA","BANKO","BANMA","BANYO","BARAJ","BARAK","BARAN",
	"BARBA","BARCI","BAR�A","BARDA","BARDO","BAREM","BARET","BARI�","BAR�T","BAR�Z","BARKA","BAROK","BARON","BARUT","BASAK",
	"BASAR","BASEN","BASIK","BASIM","BASIN","BASI�","BAS�L","BAS�T","BASKI","BASMA","BASSO","BASTI","BASUR","BASYA","BA�AK",
	"BA�AT","BA��I","BA�KA","BA�LI","BA�TA","BATAK","BATAR","BATIK","BATIL","BATIN","BATI�","BAT�K","BATKI","BATMA","BATON",
	"BATUR","BAVCI","BAVLI","BAVUL","BAYAN","BAYAT","BAYIR","BAYMA","BAYRI","BAZAL","BAZEN","BAZ�K","BAZ�T","BEBEK","BECET",
	"BEDEL","BEDEN","BED��","BED�K","BED�R","BED�K","BEG�M","BEHER","BEHEY","BEHRE","BEKAR","BEKAS","BEK��","BEKR�","BELCE",
	"BELDE","BELEK","BELEN","BELE�","BELGE","BELG�","BEL��","BEL�K","BEL�T","BELK�","BELL�","BEMOL","BENCE","BENC�","BENDE",
	"BENEK","BENG�","BEN�Z","BENL�","BERAT","BER�L","BERR�","BES�N","BESN�","BESTE","BE�ER","BE��K","BE��Z","BE�L�","BE�ME",
	"BE�ON","BE�U�","BETER","BET�K","BET�M","BETON","BEYAN","BEYAZ","BEY�N","BEY�T","BEYZ�","BEZC�","BEZEK","BEZEN","BEZG�",
	"BEZ�K","BEZ�R","BEZ��","BEZME","BEZS�","BICIL","BI�AK","BI�IK","BI�KI","BIDIK","BIKI�","BIKMA","BIYIK","BIZIR","B�BER",
	"B�BLO","B�C�K","B��EM","B���M","B����","B��K�","B��ME","B�DAR","B�DAT","B�DON","B�HU�","B�KES","B�K�R","B�LAR","B�LEK",
	"B�LET","B�LGE","B�LG�","B�L�M","B�L�R","B�L��","B�LME","B�LYE","B�ND�","B�NEK","B�NER","B�NG�","B�N��","B�N�T","B�NME",
	"B�RAZ","B�RC�","B�RER","B�REY","B�R�M","B�RL�","B�RUN","B��EK","B�TAP","B�TEK","B�TEY","B�T�K","B�T�M","B�T��","B�TK�",
	"B�TL�","B�TME","B�T�M","B�YEL","B�ZAR","B�ZCE","B�ZON","BLOKE","BOB�N","BOCCE","BOCUK","BODU�","BODUR","BO�AK","BO�AZ",
	"BO�MA","BO�UK","BO�UM","BOH�A","BOHEM","BOKLU","BOLCA","BOMBA","BOMBE","BORAK","BORAN","BORAT","BORDA","BORDO","BOR�K",
	"BORSA","BORUK","BOYAR","BOYCA","BOYLU","BOYNA","BOYOZ","BOYUN","BOYUT","BOZCA","BOZMA","BOZUK","BOZUM","BOZU�","B�B�R",
	"B�CEK","B���R","B�LEN","B�LGE","B�LME","B�L�K","B�L�M","B�L��","B�L�T","B�NCE","B�REK","B�YLE","BRAN�","BRAVO","BRON�",
	"BRONZ","BR�VE","BUCAK","BU�UK","BUDAK","BUDUN","BUG�N","BU�RA","BU�UR","BU�UZ","BUHAR","BUHUR","BUKET","BUKLE","BULAK",
	"BULGU","BULMA","BULU�","BULUT","BUNAK","BUNCA","BUNLU","BUNMA","BURAK","BURCU","BURGU","BURMA","BURSA","BURUK","BURUN",
	"BU�ON","BUT�K","BUTLU","BUTON","BUYMA","BUYOT","BUZCU","BUZLA","BUZLU","BUZUL","B�C�R","B��ET","B��L�","B�KEN","B�KME",
	"B�K��","B�K�K","B�K�M","B�K�N","B�K��","B�LU�","B�NYE","B�RG�","B�R�K","B�R�N","B�TAN","B�T�E","B�TEN","B�TEY","B�T�N",
	"B�VET","B�Y�K","B�ZG�","B�ZME","B�Z�K","CACIK","CADDE","CAH�L","CA�ZE","CAL�P","CAMCI","CAMIZ","CAM�A","CAM�T","CAMLI",
	"CAMSI","CANAN","CAN�K","CAN�P","CANLI","CARLI","CARTA","CASUS","CAYI�","CAYMA","CAZCI","CAZ�P","CAZLI","CEBEL","CEB�N",
	"CEB�R","CEBR�","CEDEL","CED�T","CEDRE","CEH�L","CEHRE","CEHR�","CEKET","CELAL","CELBE","CELEP","CEL�L","CELSE","CEMAL",
	"CEMAN","CEM�L","CEMRE","CENAH","CENAP","CEN�N","CENUP","CEP��","CEPHE","CEREN","CESET","CES�M","CESUR","CEVAP","CEVAZ",
	"CEV�R","CEV�Z","CEVV�","CEVZA","CEZA�","CEZBE","CEZ�R","CEZR�","CEZVE","CIBIL","CICIK","CILIZ","CIVIK","CIVMA","CIZIK",
	"C�B�N","C�BRE","C�C�K","C�C�M","C�COZ","C�DAL","C�DAR","C�DD�","C��ER","C�HAN","C�HAR","C�HAT","C�HAZ","C�HET","C�LVE",
	"C�MR�","C�NA�","C�NAS","C�NC�","C�NL�","C�NS�","C�R�M","C�R�T","C�S�M","C�VAN","C�VAR","C�ZRE","C�ZYE","CONTA","CORUM",
	"CO�KU","CO�MA","CO�UM","CO�U�","CUDAM","CUKKA","CUMBA","CUNDA","CUNTA","CU���","C�BBE","C�C�K","C�LUS","C�MLE","C�NHA",
	"C�NUN","C�N�P","C�RET","C�RUF","C�R�M","C�SSE","�ABUK","�ADIR","�A�LA","�A�MA","�A�RI","�AKAL","�AKAR","�AKER","�AKIL",
	"�AKIM","�AKIN","�AKIR","�AKI�","�AKMA","�AKRA","�ALAK","�ALAP","�ALAR","�ALGI","�ALIK","�ALIM","�ALI�","�ALKI","�ALMA",
	"�ALTI","�AMA�","�AMAT","�AM�A","�AMUR","�ANAK","�ANCI","�ANDI","�ANLI","�ANTA","�APAK","�APAR","�APLA","�APLI","�APMA",
	"�APUL","�APUT","�ARIK","�ARKA","�ARPI","�AR�I","�ASAR","�A�IT","�ATAK","�ATAL","�ATIK","�ATI�","�ATKI","�ATMA","�AVLI",
	"�AVMA","�AVUN","�AVU�","�AYAN","�AYCI","�AYIR","�AYLI","�EB��","�EC�K","�E�EN","�ED�K","�EHRE","�EK�E","�EKEK","�EKEL",
	"�EKEM","�EKER","�EK��","�EK�K","�EK�M","�EK��","�EKME","�EK�L","�ELEK","�ELEN","�ELG�","�EL�K","�EL�M","�ELLO","�ELME",
	"�EM�E","�EMEN","�EM��","�EM��","�ENEK","�ENET","�ENG�","�EPEL","�EPER","�EPEZ","�EP�N","�EPN�","�ERA�","�ER��","�EREZ",
	"�ERGE","�E��T","�E�ME","�E�N�","�ET�N","�EV�K","�EVRE","�EVR�","�EY�Z","�IBAN","�IDAM","�IFIT","�I�IR","�IKAK","�IKAN",
	"�IKAR","�IKIK","�IKIN","�IKI�","�IKIT","�IKMA","�IKRA","�IKTI","�INAR","�INGI","�IPIR","�IRA�","�IRAK","�IRPI","�ITAK",
	"�ITIR","�IVMA","�IYAN","���EK","��FTE","��GAN","���DE","����L","����N","����T","���L�","��LEK","��LL�","��MEK","��MEN",
	"��MME","��NCE","��NKO","��NL�","��P�L","��R��","��ROZ","��SEN","����K","��TEN","��TME","��V�T","��ZER","��ZGE","��ZG�",
	"��Z�K","��Z�M","��Z��","��ZME","�OBAN","�OCUK","�O�UL","�O�UN","�OKAL","�OK�A","�OK�U","�OKLU","�OLAK","�OLPA","�OMAK",
	"�OMAR","�OPRA","�OPUR","�ORAK","�ORAP","�ORBA","�ORLU","�ORUM","�OTRA","�OTUK","���ME","����R","��KEK","��KEL","��KME",
	"��K�K","��K�M","��K��","��M�E","��MEZ","��MME","��P��","��PL�","��REK","��RK�","��RT�","��VEN","��ZG�","��ZME","��Z�K",
	"��Z�M","��Z��","�UBUK","�UKUR","�ULCU","�ULHA","�UMRA","�UPRA","�U�KA","�UVAL","�UVA�","��K�R","��NK�","��R�K","DADA�",
	"DADAY","DA�AR","DA�CI","DA�LI","DAH�L","DA�MA","DA�M�","DA�RE","DAK�K","DALAK","DALAN","DALA�","DALGA","DALGI","DALI�",
	"DALIZ","DALLI","DALMA","DALSI","DALYA","DAMAK","DAMAL","DAMAR","DAMAT","DAMGA","DAMLA","DAMLI","DANCA","DANI�","DARA�",
	"DARA�","DARBE","DARCA","DAS�T","DAT�A","DAT�F","DAVAR","DAVET","DAVUL","DAVYA","DAYAK","DEBBE","DEB�L","DEF�N","DEFNE",
	"DEGAJ","DE�E�","DE�ER","DE��L","DE��M","DE��N","DE���","DE�ME","DE�ST","DE�ZM","DEKAN","DEKAR","DEKOR","DELG�","DEL�K",
	"DEL�L","DELME","DELTA","DEMC�","DEME�","DEMEK","DEMET","DEM�N","DEM�R","DEML�","DEMRE","DENEK","DENET","DENEY","DENGE",
	"DEN�M","DEN�Z","DENL�","DENME","DENYO","DEPAR","DERB�","DERG�","DER�K","DER�N","DERME","DERUN","DERYA","DESEN","DESTE",
	"DE��K","DE�ME","DETAY","DEVAM","DEVCE","DEV�M","DEV�R","DEVRE","DEVR�","DEY�M","DEY��","DI�AN","DILAK","DI�IK","DI�KI",
	"D�BEK","D�CLE","D�DAR","D�D�M","D�DON","D�GOR","D��ER","D�K�E","D�KE�","D�KEL","D�KEN","D�KEY","D�K�M","D�K��","D�K�T",
	"D�K�Z","D�KME","D�KSE","D�KTA","D�KTE","D�LCE","D�LC�","D�LEK","D�L�M","D�L��","D�LL�","D�LME","D�LS�","D�MA�","D�NAR",
	"D�NCE","D�NC�","D�NEK","D�NEN","D�NG�","D�NGO","D�N��","D�NL�","D�NME","D�PL�","D�REK","D�REN","D�REY","D�R��","D�R�L",
	"D�R�M","D�SKO","D����","D���L","D��L�","D�TME","D�VAL","D�VAN","D�V�K","D�V�T","D�YAR","D�YET","D�YEZ","D�YOT","D�ZEK",
	"D�ZEL","D�ZEM","D�ZEY","D�ZGE","D�ZG�","D�Z�M","D�Z�N","D�Z��","D�ZME","DOBRA","DOGMA","DO�A�","DO�AL","DO�AN","DO�MA",
	"DO�RU","DO�UM","DO�U�","DOKUZ","DOLAK","DOLAM","DOLAP","DOLAR","DOLAY","DOLGU","DOLMA","DOLUM","DOLU�","DOMUR","DOMUZ",
	"DONAM","DONLU","DONMA","DON�R","DONRA","DONUK","DORSE","DORUK","DORUM","DOSYA","DOYGU","DOYMA","DOYUM","DOYU�","DOZAJ",
	"DOZER","D�GER","D�KME","D�K�K","D�K�M","D�K��","D�LEK","D�L�T","D�NE�","D�NEK","D�NEL","D�NEM","D�NER","D�NG�","D�NME",
	"D�N�K","D�N�M","D�N��","D�N�T","D�PER","D��EK","D��EM","D��L�","D�VE�","D�V�Z","D�VME","D�V��","DRAJE","DRAMA","DUACI",
	"DUALI","DUBAR","DUBLE","DUDAK","DUHUL","DULDA","DULUK","DUMAN","DUMUR","DURA�","DURAK","DURAL","DURGU","DURMA","DURUK",
	"DURUM","DURU�","DU�AK","DU�LU","DUT�U","DUVAK","DUVAR","DUYAR","DUYGU","DUYMA","DUYUM","DUYU�","D�BEL","D�BE�","D��AR",
	"D�DEN","D�D�K","D�GAH","D��ME","D���M","D���N","D�MEN","D�N�T","D�NK�","D�N�R","D�NYA","D�RME","D�RT�","D�R�M","D�RZ�",
	"D�RZ�","D����","D��ES","D��E�","D��EY","D��K�","D��ME","D���K","D���N","D����","D���T","D�VEL","D�VEN","D�VER","D�YEK",
	"D�YUN","D�ZCE","D�ZE�","D�ZEM","D�ZEN","D�ZEY","D�ZG�","D�ZME","EBCET","EBED�","EBEL�","EBLEH","ECDAT","E�HEL","EDALI",
	"EDEB�","ED�N�","EDVAR","EFDAL","EFECE","EFEKT","EFKAR","EFLAK","EFRAT","EFR�Z","EFSUN","EFSUS","EGALE","EGLOG","EGZOZ",
	"E�LEK","E�ME�","E�MEK","E�M�R","E�REZ","E�R�M","EHRAM","EHVEN","EJDER","EK�C�","EK�L�","EKLEM","EKLER","EKMEK","EKOSE",
	"EKRAN","EKSEN","EKSER","EKS�K","EKS�N","EKS�Z","EK�R�","ELBET","ELC�K","EL�EK","EL��M","ELDEN","ELEJ�","ELEME","ELG�N",
	"ELHAK","EL�F�","EL�PS","ELL�K","ELMAS","ELMEK","ELVAN","ELYAF","ELZEM","EMARE","EMAYE","EMCEK","EMC�K","EM�C�","EMLAK",
	"EML�K","EMME�","EMMEK","EMRAZ","EMSAL","EMT�A","EMVAL","EMZ�K","ENAY�","ENCAM","ENDAM","ENDER","ENEME","ENEZE","ENFES",
	"ENGEL","ENG�N","ENKAZ","ENLEM","EN�TE","ENSAR","ENS�Z","ENTEL","ENZ�M","EOSEN","EPEY�","EPOPE","EPSEM","ERBAA","ERBAP",
	"ERBA�","ERB�N","ERC�K","ERC��","ERDEK","ERDEM","ERDEN","ERGEN","ERG�N","ER�KA","ER�ME","ER�N�","ERKAN","ERKE�","ERKEK",
	"ERKEN","ERK�N","ERKL�","ERL�K","ERMEK","ERM�N","ERM��","ERO�N","ERS�Z","ERVAH","ERZAK","ERZEL","ERZ�N","ESAME","ESANS",
	"ESAS�","ESBAK","ESBAP","ESEME","ESHAM","ES�RE","ESK�L","ESK�Z","ESLAF","ESLEK","ESMEK","ESMER","ESNAF","ESNEK","ESPAS",
	"ESPR�","ESRAR","ESR�K","ESSAH","ESTER","ESTET","ESVAP","E�ARP","E�HAS","E�KAL","E�K�N","E�LEK","E�LEM","E�L�K","E�MEK",
	"E�RAF","E�REF","E�S�Z","ET��K","ET��L","ETENE","ETFAL","ETKEN","ETK�N","ETL�K","ETMEK","ETMEN","ETN�K","ETRAF","ETSEL",
	"ETS�Z","EVAZE","EVCEK","EVC�K","EVC�L","EVDE�","EVG�N","EVHAM","EV�YE","EVKAF","EVLAT","EVLEK","EVL�K","EVRAK","EVRAT",
	"EVREN","EVR�K","EVR�M","EVSAF","EVS�N","EVS�Z","EVVEL","EYLEM","EYL�L","EYTAM","EYVAH","EYVAN","EYYAM","EZAN�","EZBER",
	"EZEL�","EZG��","EZG�N","EZ�C�","EZ�N�","EZ�NE","EZMEK","FAC�A","FAGOT","FAH��","FAHR�","FAHTE","FAHUR","FAKAT","FAK�H",
	"FAK�R","FAK�L","FALAN","FALCI","FALEZ","FALSO","FALYA","FANTA","FANT�","FANUS","FANYA","FARAD","FARA�","FARBA","FAR��",
	"FAR�L","FASET","FASIK","FASIL","FAS�H","FAS�T","FASKA","FASLI","FASON","FAT�H","FATSA","FAUNA","FAYDA","FAZIL","FAZLA",
	"FEC�R","FEDA�","FEH�M","FEHVA","FEK�L","FELAH","FELEK","FENC�","FENER","FEN�K","FENN�","FENOL","FERA�","FERAH","FERDA",
	"FERD�","FER�H","FER�K","FERL�","FERMA","FESAT","FES�H","FETHA","FET�H","FET��","FET�S","FETVA","FEVR�","FEY�Z","FIKIH",
	"FIKRA","FIR�A","FIRIN","FIRKA","FI�KI","FITIK","FITR�","F�BER","F�DAN","F�DYE","F�FRE","F�GAN","F�G�R","F��L�","F�K�R",
	"F�KR�","F�LAN","F�LAR","F�LET","F�L�Z","F�LOZ","F�LS�","F�LUM","F�NAL","F�NCE","F�N��","F�RAK","F�RAR","F�REZ","F�R�K",
	"F�RMA","F�SKE","F�STO","F��EK","F��KA","F��L�","F�T��","F�T�L","F�T�N","F�TNE","F�TRE","F�YAT","F�Z�K","FLAMA","FLEOL",
	"FLORA","FLOR�","FL�RE","FL�RT","FODLA","FODRA","FODUL","FOKUS","FOLYO","FONDA","FOND�","FONEM","FORMA","FOROZ","FORSA",
	"FORTE","FORUM","FOS�L","FRANK","FRAPE","FRENK","FRESK","FREZE","FR�GO","FR�SA","FUAYE","FUHU�","FUJER","FULAR","FULYA",
	"FUNDA","FURYA","F�L�S","F�NYE","F�SUN","F�TUR","F�ZEN","GAB�N","GABRO","GABYA","GAD�R","GAF�L","GAFUR","GA�LE","GA�TA",
	"GALAT","GAL�P","GAL�Z","GALON","GALOP","GALO�","GAMBA","GAMET","GAMLI","GAMZE","GARAJ","GARAZ","GARB�","GAR�P","GAROZ",
	"GAS�L","GA��Y","GAUSS","GAVOT","GAVUR","GAYDA","GAYET","GAYRI","GAYR�","GAYUR","GAYYA","GAZAL","GAZAP","GAZEL","GAZLI",
	"GAZOZ","GAZVE","GEBE�","GEBRE","GEBZE","GE��E","GE�EK","GE�EN","GE�ER","GE��M","GE���","GE��T","GE�ME","GED�K","GED�Z",
	"GEDME","GELEN","GEL�N","GEL�R","GEL��","GELME","GEMRE","GENEL","GEN��","GEN�Z","GENOM","GEO�T","GER��","GERE�","GEREK",
	"GEREN","GERG�","GER�M","GER��","GER�Z","GERME","GERZE","GETTO","GEVA�","GEVEN","GEV��","GEVME","GEY�K","GEY�A","GEYVE",
	"GEZ��","GEZME","GICIK","GICIR","GIDIK","GIDIM","GIPTA","GIRLA","GIYAP","G�DER","G�D��","G�DON","G�RAY","G�RD�","G�REN",
	"G�R�M","G�R��","G�RME","G�TAR","G�TME","G�Y�M","G�Y��","G�Y�T","G�YME","G�YS�","G�ZEM","G�Z�L","G�ZL�","GLASE","GNAYS",
	"GOCUK","GODO�","GOLC�","GOLL�","GONCA","GOR�L","GOT�A","GOT�K","G�BEK","G�BEL","G�B�T","G�CEN","G��ER","G��ME","G���K",
	"G���M","G����","G�DEN","G�DE�","G��EM","G���S","G�K�E","G�LEK","G�LET","G�LGE","G�L�K","G�ME�","G�MME","G�M�K","G�M��",
	"G�M�T","G�NC�","G�NEN","G�N�L","G�NYE","G�REV","G�RG�","G�RME","G�R�M","G�R��","G�VDE","G�VEK","G�VEL","G�VEM","G�YME",
	"G�Y�K","G�ZC�","G�ZDE","G�ZER","G�ZG�","G�ZL�","GRADO","GRENA","GR�ZU","GROG�","GROSA","GUANO","GUATR","GUDDE","GUGUK",
	"GULA�","GULET","GURME","GURUP","GURUR","GUSTO","GUS�L","G�BRE","G�B�R","G�C�K","G�C�N","G��L�","G�DEK","G�D�K","G�D�L",
	"G�D�M","G�FTE","G���M","G�LC�","G�LE�","G�LLE","G�LL�","G�LME","G�L�K","G�L��","G�L�T","G�ME�","G�M�L","G�M��","G�NAH",
	"G�NCE","G�NDE","G�NE�","G�NE�","G�NEY","G�NL�","G�P�R","G�RC�","G�RE�","G�RSU","G�RUH","G�R�N","G�TME","G�VE�","G�VEN",
	"G�VEZ","G�ZEL","G�ZEY","G�Z�N","HABBE","HABER","HABE�","HAB�P","HAB�S","HACET","HAC�M","HAC�R","HAC�Z","HA�LI","HADDE",
	"HADIM","HAD�M","HAD�S","HAFIZ","HAF�F","HAF�K","HAF�T","HAFTA","HAHAM","HAHHA","HA�LE","HAKAN","HAKAS","HAK�A","HAKEM",
	"HAK�M","HAK�R","HAKLI","HALA�","HALAS","HALAT","HALAY","HALEF","HALEL","HALEN","HALET","HALFA","HAL��","HAL�K","HAL�M",
	"HAL�S","HALKA","HALUK","HAMAK","HAMAL","HAMAM","HAMEL","HAMIZ","HAM�L","HAM��","HAMLA","HAMLE","HAMSE","HAMS�","HAMUR",
	"HAMUT","HANAK","HANAY","HANCI","HANDE","HANEK","HANG�","HANIM","HANUT","HANYA","HAPAZ","HAP�I","HAP�S","HAP�U","HARA�",
	"HARAM","HARAP","HARAR","HARBE","HARB�","HAREM","HARIM","HARIN","HAR��","HAR�M","HAR�R","HAR�S","HARLI","HARTA","HASAR",
	"HASAT","HASB�","HASEP","HASET","HASIL","HASIM","HASIR","HAS�S","HASPA","HASSA","HASSE","HASTA","HASUT","HA�AT","HA�IL",
	"HA��N","HA��R","HA���","HA��V","HATAY","HATIL","HATIR","HAT�F","HAT�M","HAT�P","HATM�","HATTA","HATUN","HAVA�","HAVAN",
	"HAVAS","HAVLI","HAVLU","HAVRA","HAVSA","HAVU�","HAVUT","HAVUZ","HAVVA","HAVYA","HAVZA","HAYAL","HAYAT","HAYBE","HAYCI",
	"HAYDA","HAYD�","HAYFA","HAYIF","HAYIR","HAYIT","HAYIZ","HAYL�","HAYTA","HAZAN","HAZAR","HAZCI","HAZIK","HAZIM","HAZIR",
	"HAZ�N","HAZNE","HAZRO","HEC�N","HEDEF","HEDER","HED�K","HEK�M","HELAK","HELAL","HELEN","HEL�K","HEL�S","HELKE","HELME",
	"HELVA","HEMEN","HEMPA","HEMZE","HEN�Z","HEPS�","HEREK","HER�F","HER�K","HERKE","HERTZ","HERZE","HESAP","HEVES","HEYBE",
	"HEYET","HEZEL","HEZEN","HIFIZ","HIMI�","HINIS","HIRBO","HIRKA","HIRLI","HISIM","HI�IM","HI�IR","HIYAR","HIZAR","HIZIR",
	"HIZLA","HIZLI","HIZMA","H�CAP","H�CAZ","H�C�V","H�CR�","H����","H�D�V","H�DRA","H�KEM","H�LAF","H�LAL","H�LAT","H�LYE",
	"H�MEN","H�ND�","H�NDU","H�PP�","H�SAR","H�SL�","H�SSE","H�SS�","H�TAM","H�TAN","H�TAP","H�T�T","H�ZAN","H�Z�P","HODAN",
	"HODR�","HOKEY","HOKKA","HONAZ","HOPPA","HORON","HOROZ","HORST","HO�AF","HO��A","HO�UR","HOTOZ","HOZAN","HOZAT","H�D�K",
	"H�Y�K","HUDUT","HUKUK","HULUL","HULUS","HUMAR","HUMMA","HUMOR","HUMUS","HURDA","HURMA","HURRA","HURU�","HUSUF","HUSUL",
	"HUSUS","HUSYE","HUTBE","HUTUT","HUYLU","HUZUR","H�CRE","H�CUM","H�KM�","H�K�M","H�LLE","H�LYA","H�NER","H�NSA","H�RLE",
	"H�RYA","H�S�N","H�Y�K","H�ZME","H�Z�N","I�DIR","I�RIP","IHMAK","ILGAR","ILGAZ","ILGIM","ILGIN","ILGIN","ILICA","ILICA",
	"ILIMA","ILTAR","IRAMA","IRGAT","IRK�I","IRMAK","ISKAT","ISLAH","ISLAK","ISLIK","ISRAR","ISSIZ","ISTAR","I�IMA","I�KIN",
	"I�TIR","ITLAK","ITRAH","IZGIN","IZRAR","�BARE","�BATE","�BDA�","�BLA�","�BL�S","�BRAZ","�BRET","�BR�K","�BZAL","�CBAR",
	"�CMAL","��ER�","���C�","��K�N","��LEM","��L�K","��MEK","��REK","��SEL","��S�Z","��TEN","��Y�Z","�DAD�","�DAME","�DARE",
	"�DAR�","�DD�A","�DEAL","�DMAN","�DRAK","�DRAR","�FADE","�FFET","�FHAM","�FLAH","�FLAS","�FRA�","�FRAT","�FRAZ","�FR�T",
	"�FSAT","�FTAR","��D�R","��D��","��FAL","��L�K","�HALE","�HATA","�HBAR","�HDAS","�HLAL","�HLAS","�HMAL","�HRA�","�HRAM",
	"�HRAZ","�HSAN","�HSAS","�HTAR","�HVAN","�HZAR","�KAME","�KBAL","�KDAM","�K�C�","�K�L�","�KL�M","�KMAL","�KONA","�KRAH",
	"�KRAM","�KRAR","�KRAZ","�KS�R","�LAHE","�LAH�","�LAH�","�LAVE","�LBAY","�LEN�","�LER�","�LET�","�LGE�","�LHAK","�LHAM",
	"�LHAN","�LKAH","�LKEL","�LK�N","�LLET","�LMEK","�LM�K","�LZAM","�MALE","�MALI","�MAME","�MBAT","�MB�K","�MDAT","�MECE",
	"�MKAN","�MLE�","�MLEK","�ML�K","�MREN","�MROZ","�MSAK","�NAN�","�NC�K","�NC�L","�NC�R","�ND�S","�NFAK","�NFAZ","�NG�N",
	"�NKAR","�NMEK","�N�N�","�NSAF","�NSAN","�N�AT","�NTA�","�NTAK","�NTAN","�NZAL","�P��K","�PEKA","�PHAM","�PL�K","�PS�Z",
	"�PTAL","�PUCU","�RADE","�RAD�","�RFAN","�R�CE","�R�TE","�RKME","�RM�K","�RON�","�RSAL","�RSEN","�R�AT","�SALE","�SEV�",
	"�SHAL","�SKAN","�SKO�","�SLAM","�SLAV","�SL�M","�SMEN","�SMET","�SNAT","�SPAT","�SP�R","�SP�R","�SP�T","�SRAF","�STEK",
	"�STEM","�STER","�ST�F","�ST�M","�STOP","�SYAN","��EME","��GAL","��KAL","��K�L","��LEK","��LEM","��LEV","��L�K","��MAR",
	"��RET","��S�Z","��TAH","��TE�","��YAR","�TAAT","�TE��","�THAF","�THAL","�THAM","�T�C�","�T�LA","�T�NA","�TLAF","�TL�K",
	"�TMAM","�TMEK","�VED�","�VES�","�VMEK","�Y�CE","�ZABE","�ZAFE","�ZAF�","�ZALE","�ZHAR","�ZLEK","�ZLEM","�ZLEV","�ZM�R",
	"�ZM�T","�ZN�K","�ZOLE","�ZZET","JAKAR","JAPON","JARSE","JELOZ","JETON","J�KLE","J�LET","JOKER","JOKEY","J�PON","KABAK",
	"KABAN","KABIZ","KAB�L","KAB�N","KAB�R","KABLO","KABUK","KABUL","KABUS","KABZA","KA�AK","KA�AR","KA�IK","KA�I�","KA�LI",
	"KA�MA","KA�TA","KADAR","KADEH","KADEM","KADER","KADIN","KAD�M","KAD�R","KAD�T","KADRO","KAD�K","KAFES","KAF�R","KAFUR",
	"KAG�R","KA�AN","KA�IT","KA�NI","KAHIR","KAH�L","KAH�N","KAH�R","KAHPE","KAHTA","KAHVE","KAHYA","KA�DE","KA�ME","KAKA�",
	"KAKAO","KAKI�","KAKIM","KAKI�","KAKMA","KAK�L","KALAK","KALAN","KALAS","KALAY","KALB�","KALCI","KAL�A","KALEM","KALFA",
	"KALI�","KALIK","KALIM","KALIN","KALIP","KALI�","KALIT","KALMA","KALYA","KAMAN","KAM�I","KAMER","KAMET","KAMGA","KAMI�",
	"KAM�L","KAMUS","KANAL","KANAT","KANCA","KANIK","KANI�","KANIT","KAN��","KANKA","KANLI","KANMA","KANON","KANTO","KANUN",
	"KAPAK","KAPAN","KAPI�","KAP�K","KAP��","KAPLI","KAPMA","KAPUT","KAPUZ","KARAR","KARAY","KARGA","KARGI","KARGO","KARHA",
	"KARIK","KARIN","KARI�","KARLI","KARMA","KARNE","KARN�","KARST","KAR�I","KARUN","KARYE","KASAP","KASEM","KASET","KASIK",
	"KASIM","KASIR","KASIT","KAS�S","KASKO","KASLI","KASMA","KASNI","KAST�","KA�AN","KA�AR","KA�IK","KA��F","KA�LI","KATAR",
	"KAT�I","KATIK","KATIM","KATIR","KAT�L","KAT�P","KATKI","KATLI","KATMA","KATOT","KATRE","KAVAF","KAVAK","KAVAL","KAVAS",
	"KAVAT","KAVGA","KAV�L","KAV�M","KAV�S","KAVKI","KAVM�","KAVUK","KAVUN","KAVUT","KAVUZ","KAYA�","KAYAK","KAYAN","KAYAR",
	"KAYGI","KAYIK","KAYIN","KAYIP","KAYIR","KAYI�","KAYIT","KAYMA","KAYME","KAYRA","KAY�A","KAZAK","KAZAN","KAZAZ","KAZIK",
	"KAZIL","KAZIM","KAZMA","KEBAN","KEBAP","KEB�R","KEBZE","KEDER","KEFAL","KEFEN","KEF�L","KEF�R","KEFNE","KEHLE","KEKE�",
	"KEK�K","KEKRE","KELAM","KELEK","KELEM","KELEP","KELER","KELES","KELE�","KEL�K","KELLE","KELL�","KEMAH","KEMAL","KEMAN",
	"KEMER","KEMHA","KEM�K","KEMRE","KENAR","KEND�","KENEF","KENET","KENYA","KEP�E","KEPEK","KEPEZ","KEP�R","KEPME","KERDE",
	"KEREM","KERES","KER�H","KER�M","KER�Z","KERK�","KERTE","KERT�","KESAT","KESB�","KESEK","KESEL","KESEN","KESER","KES�F",
	"KES�K","KES�M","KES�N","KES�R","LA�IN","LA��N","LA�KA","LADEN","LADES","LAD�K","LAD�N","LAF�I","LAFIZ","LAFZ�","LAGAR",
	"LAGOS","LAG�N","LA�IM","LA�IV","LAH�T","LAHOS","LAHUT","LAHZA","LAKAP","LAK�I","LAK�N","LAKOZ","LAMBA","LAMEL","LANDO",
	"LANET","LANSE","LAPON","LARGO","LARVA","LASK�","LASTA","LAT�F","LAT�N","LAVAJ","LAVA�","LAVTA","LAVUK","LAYIK","LAZCA",
	"LAZER","LAZIM","LAZUT","LE�EK","LED�N","LEGAL","LE�EN","LEH�E","LEH�M","LEM�S","LENFA","LENTO","LEPRA","LERZE","LET�E",
	"LEVHA","LEVYE","LEYD�","LEYL�","LEZAR","LEZ�Z","LI�LI","LIKIR","L�BAS","L�BO�","L�BRE","L�DER","L�FL�","L�GER","L�KEN",
	"L�K�T","L�K�R","L�MAN","L�MBO","L�M�T","L�MON","L�NET","L�N�N","L�P�T","L�POM","L�RET","L�R�K","L�SAN","L�STE","L�TRE",
	"L�VAR","L�YAN","L�ZOL","L�Z�Z","LOBUT","LODOS","LOGOS","LOJ�K","LOKAL","LOKMA","LOKUM","LONCA","LONGA","LOPUR","LORTA",
	"LO��A","LOTUS","L�KOZ","L�P�R","L�FER","L�GAT","L�GOL","L�MEN","L�NET","L�P��","L�TUF","L�ZUM","MAADA","MABAT","MABET",
	"MABUT","MACAR","MACUN","MA�KA","MADAM","MADDE","MADD�","MADEM","MADEN","MADER","MAD�K","MADUN","MAF��","MAFYA","MAGMA",
	"MAGR�","MAHAL","MAHFE","MAHF�","MAHIV","MAH�R","MAHRA","MAHUR","MAHUT","MAHYA","MA�LE","MAJ�R","MAKAK","MAKAM","MAKAS",
	"MAKAT","MAKET","MAKRO","MAKS�","MAKTA","MAKTU","MAKUL","MAKUS","MALAK","MALAZ","MALCA","MALCI","MALEN","MAL�K","MALUL",
	"MALUM","MALYA","MAMAK","MAMBO","MAMUL","MAMUR","MAMUT","MANAS","MANAT","MANAV","MANCA","MAN�U","MANDA","MANEJ","MANEN",
	"MANGA","MANGO","MAN�A","MANTI","MANT�","MANTO","MAOCU","MAPUS","MARAL","MARAZ","MARDA","MAR�Z","MARKA","MARKE","MARK�",
	"MARON","MARTI","MARUF","MARUL","MARUZ","MARYA","MASAJ","MASAL","MASAT","MAS�F","MASKE","MASNU","MASON","MAS�R","MAS�Z",
	"MASTI","MASUM","MASUN","MA�ER","MA�UK","MATAH","MATBU","MATEM","MAT�Z","MATLA","MATUF","MATUH","MAVAL","MAV��","MAVNA",
	"MAVRA","MAYIN","MAYIS","MAYNA","MAZAK","MAZOT","MAZUR","MEBDE","MEB�Z","MEBN�","MEBUS","MECAL","MECAZ","MECMU","MECRA",
	"MECUS","MEDAR","MEDET","MED�H","MED�Z","MEDYA","MEFUL","ME�ER","MEHAZ","MEHD�","MEH�L","MEHLE","MEKAN","MEK�K","MELAL",
	"MELAS","MELCE","MELEK","MELES","MELE�","MELEZ","MEL�K","MELON","MELUL","MELUN","MEMAT","MEMBA","MEMNU","MEMUL","MEMUR",
	"MENFA","MENF�","MEN�E","MENUS","MERAK","MERAM","MERC�","MEREK","MERES","MERET","MER��","MER�H","MERM�","MESA�","MESAJ",
	"MESEL","MESEN","MES�H","MESMU","MESUL","MESUT","ME�BU","ME��N","ME�RU","ME�UM","METAL","METAN","METBU","MET�L","MET�N",
	"MET�S","METOT","METRE","METRO","MEVDU","MEVK�","MEVLA","MEVTA","MEVUT","MEVZ�","MEVZU","MEYAN","MEY�L","MEYUS","MEYVE",
	"MEZAR","MEZAT","MEZON","MEZRA","MEZRU","MEZUN","MEZ�R","MEZZO","MICIR","MIGIR","MIGR�","MIHLI","MIRRA","MISIR","MISRA",
	"M��EL","M�DYE","M�KAP","M�KOZ","M�KRO","M�LAS","M�LAT","M�LEL","M�L�M","M�L�S","M�LL�","M�MAR","M�M�K","M�ML�","M�N�K",
	"M�N�R","M�RA�","M�RAS","M�RAT","M�RZA","M�SAK","M�SAL","M�SEL","M�S�L","M�S�S","M�T�L","M�TOS","M�TOZ","M�YAR","M�YAV",
	"M�YAZ","M�YOM","M�YOP","M�ZA�","M�ZAH","M�ZAN","MOB�L","MODEL","MODEM","MOD�L","MO�OL","MOHER","MOLAS","MOLLA","MOLOZ",
	"MONAT","MONTE","MOPET","MORAL","MOREN","MORTO","MORUK","MOTEL","MOT�F","MOTOR","MOTTO","MOZAK","M�BLE","M�SY�","MUARE",
	"MUC�P","MUC�R","MUC�T","MUCUK","MUCUR","MUFLA","MU�LA","MUHAL","MUHAT","MUH�K","MUH�L","MUH�P","MUH�T","MUJ�K","MUK�M",
	"MUKN�","MUKUS","MULAJ","MUMCU","MUMLU","MUMYA","MUN�S","MURAT","MUR�S","MUSAP","MUSIR","MUSKA","MUSON","MU�LU","MU�TA",
	"MU�TU","MUTAF","MUTAT","MUT�U","MUTK�","MUTLU","MUYLU","MUZIR","MUZ�P","MUZSU","M�BAH","M�D�R","M�F�T","M�FT�","M�H�M",
	"M�HRE","M�H�R","M�JDE","M�LGA","M�LK�","M�MAS","M�M�N","M�N��","M�RA�","M�R�T","M�RUR","M���R","M�Z��","M�Z�K","NABIZ",
	"NACAK","NA�AR","NA��Z","NADAN","NADAS","NAD�M","NAD�R","NAF�A","NAF�Z","NAFTA","NA�ME","NAHAK","NAHIR","NAH�F","NAH�V",
	"NAHO�","NAKD�","NAKIS","NAKI�","NAKIZ","NAK�L","NAK�P","NAK�T","NAKL�","NAK��","NALAN","NAL�A","NALIN","NAMAZ","NAMLI",
	"NAMLU","NAMUS","NANAY","NAN�K","NAR�N","NASIL","NASIP","NASIR","NAS�P","NAS�R","NA��R","NATIR","NATUK","NAT�R","NAZAL",
	"NAZAR","NAZIM","NAZIR","NAZ�K","NAZ�L","NAZ�R","NAZLI","NEBAT","NECAT","NEC�P","NEDBE","NEDEN","NED�M","NEFER","NEFES",
	"NEFHA","NEF�R","NEF�S","NEF�Y","NEFT�","NELER","NEH�R","NEH�Y","NEKES","NEKRE","NEM�E","NEML�","NEMSE","NESEP","NES��",
	"NES�H","NES�L","NES�M","NES�R","NESNE","NE�ET","NE��R","NEV�R","NEY�E","NEYSE","NEZ�F","NEZ�H","NEZ�R","NEZLE","NISIF",
	"N�CEL","N���N","N�FAK","N��DE","N�HA�","N�HAN","N�KAH","N�KAP","N�KEL","N�MET","N�NN�","N�PEL","N�SA�","N�SAN","N�SAP",
	"N�SP�","N��AN","N�TEL","N�YAZ","N�YET","N�ZAM","N�Z�P","NODUL","NOD�L","NOGAY","NOHUT","NOKRA","NOKTA","NONO�","NOTAM",
	"NOTER","N�BET","N�RON","NUKUT","NUMEN","NURLU","NUTUK","N�ANS","N�FUS","N�FUZ","N�KTE","N�KUL","N�SHA","N�ZUL","OBERJ",
	"OBRUK","OCUMA","ODACI","ODALI","ODEON","ODSUZ","OFANS","OFLAZ","OFR�S","OFSET","O�LAK","O�LAN","OJEL�","OKAP�","OKLUK",
	"OKS�T","OKTAN","OKTAV","OKUMA","OKUME","OLASI","OL�UM","OLE�K","OLE�N","OLGUN","OLMAK","OLMAZ","OLMU�","OLURU","OMBRA",
	"OMLET","ONAMA","ONGEN","ONGUN","ON�KS","ONLAR","ONLUK","ONMAK","ONSUZ","OOS�T","OPERA","OPT�K","ORADA","ORALI","ORASI",
	"ORAYA","ORC�K","ORFOZ","ORGAN","ORGCU","OR�ON","ORK�T","ORLON","ORMAN","ORTA�","ORTAK","ORTAM","ORTAY","ORTEZ","ORTOZ",
	"OTACI","OTAMA","OT�UL","OT�ST","OT�ZM","OTLAK","OTLUK","OTSUL","OTSUZ","OVALI","OVMA�","OVMAK","OYACI","OYALI","OYDA�",
	"OYLUM","OYMAK","OYNAK","OYNA�","OZMOZ","OZUGA","�B�R�","�DEME","�DLEK","�D�N�","��LEN","��REK","�KS�Z","�L�EK","�L�ER",
	"�L�ME","�L��M","�L��N","�L���","�L��T","�LG�N","�LMEK","�LMEZ","�LM��","�NCEL","�NC�L","�NDER","�NER�","�NEZE","�NLEM",
	"�NL�K","�NSEL","�PMEK","�RC�N","�RDEK","�REKE","�RGEN","�RG�N","�RG�T","�RMEK","�RNEK","�RTME","�RT�K","�RT��","�R�C�",
	"�R�L�","�TEK�","�TMEK","�T�C�","�T�R�","�VMEK","�V�C�","�V�N�","�ZALP","�ZBEK","�ZDEK","�ZDEN","�ZDE�","�ZEME","�ZEN�",
	"�ZEN�","�ZERK","�ZG�L","�ZG�N","�ZG�R","�ZLEM","�ZL�K","�ZNEL","�ZSEL","PABU�","PA�AL","PA�OZ","PADOK","PAFTA","PAGAN",
	"PAHAL","PAKET","PALAN","PALAS","PALAZ","PALET","PALTO","PAMPA","PAMUK","PANDA","PANEL","PAN�K","PAPAK","PAPAZ","PAPEL",
	"PARAF","PAR�A","PARKA","PARKE","PARPA","PARSA","PART�","PARYA","PASAJ","PASAK","PAS�I","PAS�F","PASLI","PAS�R","PASTA",
	"PATAK","PATAL","PATEN","PAT�K","PATOZ","PAUNT","PAYAN","PAYDA","PAYEN","PAYET","PAYLI","PAZAR","PAZEN","PE���","PEDAL",
	"PEDER","PEK�E","PEL�N","PEL�T","PELTE","PEL�R","PEL��","PEMBE","PEN�E","PENES","PENG�","PEN�S","PENSE","PENYE","PERDE",
	"PEREN","PERK�","PERMA","PERM�","PERON","PERUK","PERVA","PESEK","PES�S","PE��N","PE�L�","PE�TU","PETEK","PEYDA","PEYKE",
	"PIHTI","PINAR","PIRPI","PIRTI","PISMA","P�GME","P�KAJ","P�KAP","P�KET","P�LAV","P�L��","P�LL�","P�LOT","P�NEL","P�NES",
	"P�NT�","P�PET","P�R�T","P�S�K","P�S�N","P��EK","P���K","P���M","P��ME","P��T�","P�TON","P�YAN","P�YAZ","P�YES","P�YON",
	"P�ZZA","PLAKA","PLASE","PLAT�","PLATO","PLAZA","POKER","POLAR","POLAT","POLEN","POL�M","POL�P","POL�S","POLKA","POL�M",
	"POMAK","POMAT","POMPA","PONJE","PONZA","POP�U","PORNO","PORTE","PORTO","POSOF","POSTA","PO�ET","POTAS","POT�N","POTUK",
	"POTUR","POYRA","P���K","PRAFA","PRAYA","PRENS","PRESE","PROJE","PROVA","PRUVA","PUDRA","PUFLA","PULCU","PULLU","PULSU",
	"PULU�","PUMBA","PUNTO","PUSAT","PUSET","PUSLU","PUSMA","PUVAR","P�NEZ","P�REN","P�R�Z","P�S�R","P�T�R","RABIT","RACON",
	"RADAR","RADDE","RADON","RADYO","RAF�T","RAFLI","RAFYA","RAGB�","RAHAT","RAH�M","RAH�P","RAHLE","RAHNE","RAKAM","RAKET",
	"RAKIM","RAK�K","RAK�P","RAK�T","RAKOR","RAKUN","RALL�","RAMAK","RAMPA","RANDA","RANZA","RAPOR","RASAT","RASIT","RASPA",
	"RASYO","RATIP","RAUNT","RAYBA","RAY��","REAYA","REBAP","RECEP","REC�M","RE�EL","RED�F","REFAH","REF�K","REF�J","REH�N",
	"REJ�M","REKAT","REK�Z","REKOR","REMEL","REM�L","REM�Z","RENDE","RESEN","RES�F","RES�M","RESM�","RESUL","RE��T","RE�ME",
	"REVA�","REVAK","REVAN","REV�R","REV��","REYON","REZ�L","RIZIK","R�CAL","R�CAT","R�J�T","R�MEL","R�NGA","R�T�M","R�YAL",
	"ROBOT","RODAJ","RODEO","ROKET","ROLC�","ROMAN","ROMEN","ROSTO","ROT�L","ROTOR","ROZET","R�FLE","R�GAR","R�TAR","R�TU�",
	"RUBA�","RUBLE","RUFA�","RUGAN","RUH�A","RUHEN","RUHLU","RUJLU","RULET","RUMBA","RUMCA","RUMUZ","RUN�K","RUS�A","RUT�N",
	"R�ESA","R�K�N","R�K��","R�SUM","R�SUP","R�SVA","R�TBE","R�YET","SABAH","SABAN","SABIK","SABIR","SAB�T","SABUH","SABUN",
	"SABUR","SA�AK","SA�IK","SA�I�","SA�LI","SA�MA","SADAK","SADET","SADIK","SADIR","SAD�K","SADME","SAF�A","SAFER","SAFHA",
	"SAF�R","SAFRA","SA�CI","SA�IM","SA�IN","SA�IR","SA�MA","SA�RI","SAHAF","SAHAN","SAH�H","SAH�L","SAH�P","SAHNE","SAHRA",
	"SAHRE","SAHTE","SAHUR","SA�KA","SAKAF","SAKAK","SAKAL","SAKAR","SAKAT","SAKIN","SAKIT","SAKIZ","SAK�L","SAK�M","SAK�N",
	"SAK�T","SAKLI","SAKSI","SALAH","SALAK","SALAM","SALA�","SALAT","SALCI","SAL�A","SALEP","SALGI","SALIK","SAL�K","SAL�M",
	"SAL�P","SALLI","SALMA","SALON","SALOZ","SALPA","SALSA","SALTA","SALTO","SALUR","SALVO","SALYA","SAMAN","SAMBA","SAMSA",
	"SAMUR","SAMUT","SANAL","SANAT","SANCI","SANEM","SANGI","SANIK","SANI�","SANK�","SANLI","SANMA","SANRI","SAPAK","SAPAN",
	"SAPIK","SAPI�","SAPKI","SAPLI","SAPMA","SARA�","SARAK","SARAT","SARAY","SARGI","SARIK","SARIM","SARI�","SARIZ","SAR�G",
	"SAR�H","SARMA","SARPA","SASON","SATEN","SATH�","SATIH","SATIM","SATIR","SATI�","SAT�R","SATMA","SAUNA","SAVAK","SAVAN",
	"SAVA�","SAVAT","SAVCA","SAVCI","SAVLA","SAVLO","SAVMA","SAVUR","SAYA�","SAYFA","SAYGI","SAYHA","SAYIM","SAYIN","SAYI�",
	"SAYMA","SAYRI","SAZAK","SAZAN","SAZCI","SAZLI","SEANS","SEBAT","SEBEN","SEBEP","SEB�L","SEBZE","SECDE","SE�AL","SE��M",
	"SE���","SE�K�","SE�ME","SEDEF","SED�R","SEDYE","SEFER","SEF�H","SEF�L","SEF�R","SEGAH","SEHER","SEH�M","SEH�V","SEHPA",
	"SEKEL","SEK�L","SEK��","SEK�Z","SEKME","SEKS�","SEKTE","SELAM","SELEF","SELEK","SELEN","SEL�M","SEL�S","SELVA","SELV�",
	"SEMAH","SEMA�","SEMAN","SEMEN","SEMER","SEM�H","SEM�Z","SENCE","SENEK","SENET","SEN�R","SEN�T","SEPEK","SEPET","SEPYA",
	"SERAK","SERAP","SER�E","SEREN","SERG�","SER�K","SER�M","SER�N","SER��","SERME","SERUM","SERV�","SES��","SESL�","SETER",
	"SET�K","SET�R","SETRE","SEVAP","SEVDA","SEVER","SEVG�","SEV�M","SEV�R","SEV��","SEVME","SEYEK","SEY�R","SEY�S","SEY�T",
	"SEZG�","SEZ��","SEZME","SEZON","SICAK","SI�AN","SI�MA","SIFAT","SIFIR","SI�IN","SI�IR","SI�LA","SI�MA","SIHH�","SIHR�",
	"SIK�A","SIKIM","SIKIT","SIKMA","SIMAK","SINA�","SINAV","SINDI","SINIF","SINIK","SINIR","SINMA","SIRAT","SIRCI","SIR�A",
	"SIRIK","SIRIM","SIRLI","SIRMA","SISKA","SITMA","SIVIK","SIYGA","SIYGI","SIZAK","SIZI�","SIZMA","S�BOP","S�C�L","S�C�M",
	"S�D�K","S�F�N","S�FON","S�GAR","S���L","S�H�R","S��RT","S�KKE","S�KME","S�LAH","S�LAJ","S�LG�","S�L�K","S�L�S","S�L��",
	"S�LK�","S�LLE","S�LME","S�MAV","S�MGE","S�M�T","S�MYA","S�NEK","S�N�K","S�N�R","S�N��","S�NLE","S�NME","S�NOP","S�NS�",
	"S�N�S","S�PER","S�PS�","S�REN","S�RKE","S�RMO","S�ROZ","S�RTO","S�SL�","S�TEM","S�T�L","S�VAS","S�V�L","S�VR�","S�YAH",
	"S�YAK","S�YEK","S�YER","S�YME","S�ZCE","SKALA","SK�NK","SLAYT","SOFRA","SOFTA","SO�AN","SO�UK","SOKAK","SOKET","SOKMA",
	"SOKRA","SOKUM","SOKUR","SOKU�","SOLAK","SOLCU","SOLMA","SOLUK","SOLU�","SOMAK","SOMON","SOMUN","SOMUT","SOMYA","SONAR",
	"SONAT","SONDA","SONLU","SONRA","SONU�","SORGU","SOR�T","SORMA","SORT�","SORUM","SORUN","SORU�","SOS�S","SOYKA","SOYLU",
	"SOYMA","SOYUM","SOYU�","SOYUT","S����","S���T","S�KEL","S�KME","S�K�K","S�K�M","S�K�N","S�K��","S�LOM","S�NME","S�N�K",
	"S�N�M","S�N��","S�VEN","S�VG�","S�VME","S�V��","S�ZCE","S�ZC�","S�ZDE","S�ZEL","S�ZL�","SPAZM","SPERM","SPREY","STANT",
	"STAT�","STENO","STENT","ST�LO","STRE�","STRES","SUARE","SUBAY","SUBRA","SUBYE","SUCUK","SUCUL","SU�LU","SUDAK","SUDAN",
	"SUFLE","SUKUT","SULAK","SULTA","SULUK","SUMAK","SUNAK","SUNGU","SUNMA","SUNTA","SUNUM","SUNU�","SUOKU","SUPAP","SURAT",
	"SURET","SURU�","SUSAK","SUSAM","SUSKU","SUSMA","SUSTA","SUSU�","SUSUZ","SUTA�","SUTLU","SUVAT","SUYUK","S�BEK","S�BUT",
	"S�BYE","S�CUT","S�FL�","S��ME","S�KSE","S�KUN","S�KUT","S�LUK","S�L�K","S�L�N","S�L�S","S�MEK","S�MEN","S�MER","S�M�K",
	"S�NG�","S�NME","S�NN�","S�PER","S�RAT","S�RE�","S�REK","S�RFE","S�RG�","S�RME","S�RRE","S�RUR","S�R�M","S�R��","S�SEN",
	"S�SL�","S�SME","S�T��","S�TL�","S�TRE","S�TS�","S�TUN","S�VEN","S�VME","S�YEK","S�Y�M","S�ZEK","S�ZG�","S�ZME","S�Z�K",
	"S�Z��","�ABAN","�AFAK","�AF��","�AFUL","�AHAP","�AHIS","�AH�N","�AH�T","�AHNE","�AHS�","�A�BE","�A�RE","�AKAK","�AKUL",
	"�ALAK","�AMAN","�AMAR","�AM�L","�ANLI","�AP�I","�APEL","�APKA","�APLI","�ARAP","�ARKI","�ARK�","�ARP�","�ARYO","�A�AA",
	"�A�MA","�ATIR","�AVUL","�AYAK","�AYAN","�AYET","�AY�A","�AYKA","�EBEK","�EDDE","�ED�T","�EF�K","�EH�R","�EH�T","�EHLA",
	"�EKEL","�EKER","�EK�L","�EKL�","�EKVA","�ELEK","�EMSE","�EMS�","�EP�T","�ERAN","�EREF","�ERHA","�ER�F","�ER�K","�ER�R",
	"�ER�T","�ERPA","�ET�M","�INAV","�IPKA","�IRAK","��FON","��FRE","��KAR","��LEM","��LEP","��L�N","��LTE","��MAL","��MD�",
	"��N�K","��NTO","��RAN","��R�N","���EK","����K","���KO","���L�","���ME","�OF�R","�OPAR","�ORCA","�OSET","�OSON","�OVEN",
	"��LEN","��M�Z","��YLE","�UARA","�UBAT","�UHUT","�UNCA","�URUP","��K�R","��MUL","��PHE","TABAK","TABAN","TAB��","TAB�P",
	"TAB�R","TABLA","TABLO","TABUR","TABUT","TABYA","TAC�K","TAC�L","TAC�R","TAC�Z","TA�LI","TADAT","TADIM","TAD�L","TAFRA",
	"TAFTA","TAHIL","TAH�N","TAHRA","TAHTA","TAKAS","TAKAT","TAKIK","TAKIM","TAK�M","TAK�P","TAKKE","TAKLA","TAKMA","TAKOZ",
	"TAKSA","TAKS�","TAKT�","TAKVA","TALAK","TALAN","TALAS","TALA�","TALAZ","TALEP","TAL�H","TAL�K","TAL�L","TAL�M","TAL�P",
	"TAMAH","TAMAM","TAM�K","TAM�M","TAM�R","TANEN","TANGO","TANIK","TANIM","TANI�","TANIT","TAN�N","TANRI","TAOCU","TAPAN",
	"TAPI�","TAP�R","TAPMA","TAPON","TARAF","TARAK","TARA�","TARAZ","TARET","TARIM","TAR�F","TAR�H","TAR�K","TAR�Z","TARLA",
	"TARTI","TASAR","TASD�","TASIM","TASMA","TASN�","TA�AK","TA��I","TA�IL","TA�IM","TA�IT","TA�LI","TA�MA","TA�RA","TA�SI",
	"TATAR","TAT�L","TATLI","TATMA","TAVAF","TAVAN","TAVAS","TAVCI","TAVIR","TAV�K","TAV�Z","TAVLA","TAVLI","TAVUK","TAVUS",
	"TAYFA","TAYGA","TAYIN","TAY�N","TAY�P","TAZ�M","TAZ�P","TAZ�Z","TEAL�","TEAT�","TEBAA","TEBER","TEC�L","TEC�M","TEDA�",
	"TED�P","TE�ET","TEH�R","TE�ST","TE�ZM","TEK��","TEKEL","TEKER","TEK�L","TEK�N","TEK�R","TEK�T","TEKKE","TEKL�","TEKME",
	"TEKNE","TEKST","TELA�","TELEF","TELEK","TELEM","TELES","TEL�F","TEL�N","TEL�S","TELL�","TELS�","TELVE","TEMAS","TEMEK",
	"TEMEL","TEM�N","TEM�Z","TEMPO","TENGE","TENHA","TEN�S","TENOR","TENTE","TENYA","TEOR�","TEP�K","TEP�R","TEP��","TEPKE",
	"TEPK�","TEPME","TEPS�","TERAS","TERB�","TEREK","TERES","TERF�","TER�M","TERK�","TERL�","TERME","TER�R","TERZ�","TES�R",
	"TES�S","TES�T","TESR�","TEST�","TE�C�","TE�NE","TE�R�","TE�Y�","TET�K","TET�R","TEVD�","TEVEK","TEV�L","TEVK�","TEVS�",
	"TEVZ�","TEYEL","TEY�T","TEYZE","TEZAT","TEZCE","TEZEK","TEZL�","TIBB�","TIFIL","TIKA�","TIKIM","TIKIR","TIKIZ","TIKMA",
	"TIMAR","TINAZ","TINMA","TIPKI","TIRAK","TIRA�","TIRIK","TIRIL","TIRIS","T�F�S","T�KEL","T�LK�","T�M�S","T�NER","T�P�K",
	"T�RAJ","T�RAN","T�RAT","T�R�T","T�R�Z","T�RLE","T�RS�","T�R�E","T�TAN","T�T�Z","TOHUM","TOKA�","TOKAT","TOKLU","TOKUZ",
	"TOKYO","TOLGA","TOMAK","TOMAR","TONAJ","TONER","TONGA","TON�K","TONLA","TONLU","TONOZ","TONYA","TOPA�","TOPAK","TOPAL",
	"TOPAZ","TOP�U","TOP�K","TOPLA","TOPLU","TOPUK","TOPUR","TOPUT","TOPUZ","TORAK","TORBA","TOR�K","TORNA","TORTU","TORUL",
	"TORUM","TORUN","TOSUN","TOSYA","TOTAL","TOTEM","TOYCA","TOYCU","TOYGA","TOZAN","TOZLU","TOZMA","T�REL","T�REN","T�RP�",
	"T�VBE","T�ZEL","TRAFO","TRAKE","TRANS","TRAN�","TRATA","TR�KO","TROMP","TR�ST","TUFAN","TUGAY","TU�CU","TU�LA","TU�LU",
	"TU�RA","TUHAF","TULUK","TULUM","TULUP","TUMAN","TUMBA","TUN�K","TURA�","TURAN","TURBA","TURBO","TURFA","TURNA","TURNE",
	"TURNO","TUR�U","TURTA","TUTA�","TUTAK","TUTAM","TUTAR","TUTKU","TUTMA","TUTUK","TUTUM","TUTU�","TUTYA","TUVAL","TUYU�",
	"TUZAK","TUZCU","TUZLA","TUZLU","TUZSU","T�FEK","T�MCE","T�MEL","T�MEN","T�MEY","T�M�R","T�M�R","T�NEK","T�NEL","T�NME",
	"T�P��","T�PL�","T�RAP","T�RBE","T�REL","T�REV","T�RK�","T�RK�","T�RL�","T�R�M","T�TME","T�TS�","T�T�N","T�V�T","T�YL�",
	"T�YME","T�ZEL","T�Z�K","TV�ST","UCUBE","U�ARI","U�KUN","U�KUR","U�MAK","U�MAN","U�SUZ","U�UCU","U�RAK","U�RA�","U�RUN",
	"UKALA","UKNUM","ULAMA","ULEMA","ULUFE","ULUMA","UMACI","UMMAK","UMMAN","UMUM�","UNLUK","UNSUR","UNVAN","URBAN","URGAN",
	"USAN�","USARE","USKUR","USSAL","U�KUN","U��AK","UTAN�","UTMAK","UYARI","UYGAR","UYGUN","UYGUR","UYLUK","UYMAK","UYMAZ",
	"UYRUK","UYSAL","UYUMA","UZAMA","UZLET","UZLUK","UZMAN","�CRET","��GEN","��G�L","��KAT","��LER","��L�K","��TA�","�DEBA",
	"�FLE�","��R�M","�LFET","�LGER","�LKER","�LSER","�MERA","�MMET","�MRAN","�NDE�","�N�TE","�NLEM","�NS�Z","�REME","�REM�",
	"�RG�P","�RKEK","�RKME","�RK��","�R�ME","�RYAN","�SERA","�SK�F","�SLUP","�STAT","�STEL","�STL�","�ST�N","��EN�","��MEK",
	"���ME","�TMEK","�T�C�","�T�L�","�ZERE","�ZER�","�ZG�N","�ZL�K","�ZMEK","�Z�C�","�Z�N�","VAC�P","VAGON","VAH�M","VAH�T",
	"VAH�Y","VAH��","VAKAR","VAKFE","VAKIA","VAKIF","VAK�T","VAKUM","VAKUR","VAL�Z","VAL�R","VANLI","VAPUR","VARAK","VARAN",
	"VARDA","VARGI","VARI�","VAR�L","VAR�S","VAR�T","VARMA","VARO�","VARTA","VARTO","VASAT","VASIF","VASIL","VA�AK","VATAN",
	"VATKA","VATOZ","VAZIH","VEBAL","VEC�H","VEC�Z","VE�HE","VED�A","VEFAT","VEH�M","VEK�L","VELET","VELUR","VELUT","VEN�S",
	"VERD�","VEREM","VEREV","VERG�","VER�M","VER��","VER�T","VERME","VEZ�N","VEZ�R","VEZNE","VICIK","V�DEO","V�GLA","V�LLA",
	"V�RAJ","V�RAL","V�RAN","V�R�S","V�SAL","V�SK�","V��NE","V�TES","V�T�R","V�YAK","V�YOL","V�ZON","V�Z�R","VOKAL","VOLAN",
	"VOLTA","VONOZ","VOTKA","VOYVO","VUKUF","VULVA","VURA�","VURGU","VURMA","VURUK","VURU�","VUSUL","VUZUH","V�CUT","V�RUT",
	"V�SAT","YABAN","YABGU","YAFTA","YA�AR","YA�CI","YA�IR","YA�I�","YA�IZ","YA�LI","YA�MA","YA�SI","YAHEY","YAHN�","YAH��",
	"YAHUT","YAKIM","YAKIN","YAKI�","YAKIT","YAK�N","YAKMA","YAKUT","YALAK","YALAN","YALAZ","YALIM","YALIN","YALIZ","YALPA",
	"YALPI","YAMA�","YAMAK","YAMAN","YAM�I","YAMUK","YANAK","YANAL","YANAY","YANAZ","YANCI","YANGI","YANIK","YANI�","YANIT",
	"YANKI","YANLI","YANMA","YANSI","YAPAK","YAPAY","YAPIK","YAPIM","YAPI�","YAPIT","YAPMA","YARAK","YARAN","YARAR","YARA�",
	"YARDA","YAREN","YARGI","YARIK","YARIM","YARIN","YARI�","YARKA","YARMA","YASAK","YASAL","YAS�N","YASLI","YASMA","YASSI",
	"YA�AM","YA��A","YA�IT","YA�LI","YATAK","YATAY","YAT�I","YATIK","YATIM","YATIR","YATI�","YATMA","YATSI","YAVAN","YAVA�",
	"YAVER","YAVRU","YAVSI","YAVUZ","YAYAN","YAYGI","YAYIK","YAYIM","YAYIN","YAYI�","YAYLA","YAYLI","YAYMA","YAZAR","YAZGI",
	"YAZIK","YAZIM","YAZIN","YAZIR","YAZI�","YAZIT","YAZMA","YEDEK","YED�Z","YEDME","YEGAH","YEGAN","YE�EN","YE��N","YE�N�",
	"YEKTA","YEKUN","YELE�","YELEK","YEL�N","YELL�","YELME","YELVE","YEMC�","YEMEK","YEM�N","YEM��","YENGE","YENG�","YEN�K",
	"YENL�","YENME","YEREL","YEREY","YERG�","YERL�","YERME","YE��L","YE��M","YETER","YET�K","YET�M","YETKE","YETK�","YETME",
	"YEVM�","YEYG�","YEZ�T","YI�IN","YI�I�","YI�MA","YIKIK","YIKIM","YIKI�","YIKMA","YILAN","YILGI","YILIK","YILKI","YILMA",
	"YIRIK","Y���T","Y�R�K","Y�RM�","Y�T�K","Y�T�M","Y�T��","Y�TME","Y�VL�","Y�Y�M","Y�Y��","YOBAZ","YO�UN","YOK�U","YOKSA",
	"YOKU�","YOLAK","YOLCU","YOLLU","YOLMA","YOLUK","YOMRA","YONCA","YONGA","YONMA","YONTU","YORGA","YORMA","YORTU","YORUM",
	"YOSMA","YOSUN","Y�NL�","Y�R�K","YUDUM","YUFKA","YUKA�","YULAF","YULAR","YUMAK","YUMMA","YUMRU","YUMUK","YUNAK","YUNAN",
	"YUNMA","YUNUS","YURDU","YUTAK","YUTMA","YUTUM","YUTU�","YUVAK","YUVAR","YUVGU","Y�K��","Y�KL�","Y�K�M","Y�K�N","Y�LG�",
	"Y�L�K","Y�NL�","Y�REK","Y�R�K","Y�SR�","Y�ZDE","Y�ZER","Y�ZEY","Y�ZL�","Y�ZME","Y�Z�K","Y�Z��","ZABIT","ZAB�T","ZAFER",
	"ZA�AR","ZA�CI","ZA�LI","ZAH�R","ZAH�T","ZAL�M","ZAMAN","ZAM�R","ZAMLI","ZAMME","ZANKA","ZANLI","ZARAR","ZARCI","ZAR�F",
	"ZARSI","ZARTA","ZATEN","ZAYIF","ZEBAN","ZEBRA","ZEBUN","ZEBUR","ZEC�R","ZECR�","ZEF�R","ZEHAP","ZEH�R","ZEKAT","ZEKER",
	"ZEL�L","ZELVE","ZEM�N","ZENC�","ZENNE","ZERDE","ZERRE","ZEVAL","ZEVAT","ZEVCE","ZEY�L","ZIBIN","ZIHLI","ZIMBA","ZIMN�",
	"ZIPIR","ZIPKA","ZIRVA","Z�FAF","Z�F�N","Z�F�R","Z�FOS","Z�GON","Z�GOT","Z�HAF","Z�H�N","Z�HN�","Z�K�R","Z�LL�","Z�MM�",
	"Z�NDE","Z�RA�","Z�RVE","Z�YAN","ZLOT�","ZOMB�","ZORBA","ZORCA","ZORGU","ZORLA","ZORLU","ZORUN","ZUHUR","ZUL�M","ZURNA",
	"Z�BDE","Z�HAL","Z�HRE","Z�HUL","Z�KAM","Z�LAL","Z�L�F","Z�MRE","Z�PPE","Z�RRA",
	};
	char dizibos[24];	//harflerin tutuldugu gecici dizi
	char diziyesil[5];	//yesil harfler
	char dizisari[5];	//sari harfler
	char dizisiyah[24];	//siyah harfler
	char dizisiyahvar[24];	
	int diziyesil1[5];	//yesil harflerin indisleri
	int dizisari1[5];	//sari harflerin indisleri
	int yhs,shs,sihs; //harf say�lar�
	int ys=0,ss=0,sis=0,sis2=0; //dizilerin son kald�g� yer
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
					case -128: dizibos[i] = '�'; break;
				    case -90: dizibos[i] = '�'; break;
				    case -104: dizibos[i] = '�'; break;
				    case -103: dizibos[i] = '�'; break;
				    case -98: dizibos[i] = '�'; break;
				    case -102: dizibos[i] = '�'; break;
				    case -121: dizibos[i] = '�'; break;
				    case -89: dizibos[i] = '�'; break;
				    case -115: dizibos[i] = '�'; break;
				    case -108: dizibos[i] = '�'; break;
				    case -97: dizibos[i] = '�'; break;
				    case -127: dizibos[i] = '�'; break;
				}
				printf("Ye�il harfin indisini girin\t");
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
			printf("Arad���n�z kelimeyi buldunuz");
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
					case -128: dizibos[i] = '�'; break;
				    case -90: dizibos[i] = '�'; break;
				    case -104: dizibos[i] = '�'; break;
				    case -103: dizibos[i] = '�'; break;
				    case -98: dizibos[i] = '�'; break;
				    case -102: dizibos[i] = '�'; break;
				    case -121: dizibos[i] = '�'; break;
				    case -89: dizibos[i] = '�'; break;
				    case -115: dizibos[i] = '�'; break;
				    case -108: dizibos[i] = '�'; break;
				    case -97: dizibos[i] = '�'; break;
				    case -127: dizibos[i] = '�'; break;
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
			printf("Sar� Harfleri girin\t");
			scanf("%s",dizibos);
			for(i=0;i<shs;i++)
			{
				z=dizibos[i];
				switch(z)
				{
					case -128: dizibos[i] = '�'; break;
				    case -90: dizibos[i] = '�'; break;
				    case -104: dizibos[i] = '�'; break;
				    case -103: dizibos[i] = '�'; break;
				    case -98: dizibos[i] = '�'; break;
				    case -102: dizibos[i] = '�'; break;
				    case -121: dizibos[i] = '�'; break;
				    case -89: dizibos[i] = '�'; break;
				    case -115: dizibos[i] = '�'; break;
				    case -108: dizibos[i] = '�'; break;
				    case -97: dizibos[i] = '�'; break;
				    case -127: dizibos[i] = '�'; break;
				}
				printf("Sar� harfin indisini girin\t");
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
			printf("B�YLE B�R KEL�ME BULUNAMADI!!!");
		}
		printf("\n");
		yok=0;
		x++;
	}
	getch();//Ekran kapanmas�n diye
}
// Kullan�c�dan al�nan girdi harfi mi, say� m� ?
