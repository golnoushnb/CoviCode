#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>


void start(void);
void log_in (void);
void new_acc (void);
void forgot_pass (void);
void Normal_user (void);
void Bns_owner (void);
void Normaln_user2 (int line);
void Bnsb_owner2 (int lineb);
void Admin (void);
void fordelay (int j);
void close1 (void);
void health1 (int line);
void edit1n (int line);
void health_history1 (int line);
void meets1(int line);
void meet_history1 (int line);
void place_n1(int line);
void antiseptic1 (int lineb);
void place1 (int lineb);
void place_history1(int line);
void edit1b (int lineb);
void covid_statistics(int line);
void AddHospital (void);
void statistics (void);
void recovered (void);
void suffering(int lineb);
void near_hospitals(int line);
void meet_rec(char* name);
void editA(void);
void recovered_deads(void);
void allNusers(void);
void allBusers(void);
void passed_away(void);
void allhospitals(void);
void menu(void);
void beat(int line);

           





char pass[20];
char user1[20];
char username_f[20], password_f[20], password1_f[20], email_f[50];
char codemeli_f[20];
char codemeli_m[20],place_m[1000],city_m[50],region_m[50];


  struct visit_h
  {
    char name[30];
     time_t time;
     char code[30];
  };
   struct visit_h list1; ///// health history

   struct visit_b
   {
     
      time_t time;
       char place[50];
       char alert[50];
       char name[30];
       char code[30];
   };
   struct visit_b plc1; //// place
   
   
   
   struct visit_m
   {
       time_t time;
       char name1[50],name2[50];
       char code1[50],code2[50];
  
      
   };
   struct visit_m meet1; //// meeting

  
   struct user_n
   {
       
     char height_n[5], age_n[5], weight_n[5],blood_n[10];
     char name_n[20], lastname_n[20], username_n[20],codemeli_n[20];
     char password_n[20], password1_n[20], email_n[200];
     char condition[50];
     int dead;
     int hr;//0=zende
     time_t time;
   };
   struct user_n NormalUser;
  
   
   struct user_b
   {
       char name_b[20], lastname_b[20], username_b[20],codemeli_b[20];
       char password_b[20], password1_b[20], email_b[200];
       char place_b[1000],city_b[50],region_b[50];
       char alert[20];
   };
   struct user_b BusinessOwner;
   struct hospital
   {
     char name[20];
     char city[20];
     char region[20];

   };
   struct hospital hospital;
   struct user_a
   {
     char name[20],lastname[20],codemeli[20];
     char username[20],email[80],password[20];
  };
  struct user_a modir;
  void start(){
    system("clear");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\x1b[31m██████╗  ██████╗ ██╗     ██╗██╗"" \x1b[0m██╗"" \x1b[32m██████╗ ██████╗ ██████╗ ███████╗"" \x1b[0m██╗\n"
       "\t\t\t\t\x1b[31m██╔════╝██╔═══██╗██║     ██║██║""\x1b[0m██╔╝""\x1b[32m██╔════╝██╔═══██╗██╔══██╗██╔════╝"" \x1b[0m╚██╗  ██╗\n"
       "\t\t\t\t\x1b[31m██║     ██║   ██║██║     ██║██║""\x1b[0m██║"" \x1b[32m██║     ██║   ██║██║  ██║█████╗   "" \x1b[0m██╗ ██║╚═╝\n"
       "\t\t\t\t\x1b[31m██║     ██║   ██║╚██╗   ██╔╝██║""\x1b[0m██║ ""\x1b[32m██║     ██║   ██║██║  ██║██╔══╝   "" \x1b[0m██╗  ██║▄█╗\n"
       "\t\t\t\t\x1b[31m╚██████╗╚██████╔╝  ╚████╔╝  ██║""\x1b[0m╚██╗""\x1b[32m╚██████╗╚██████╔╝██████╔╝███████╗"" \x1b[0m██╗   ██╔╝▀═╝\n"
       "\t\t\t\t  \x1b[31m═════╝ ╚═════╝    ╚═══╝   ╚═╝"" \x1b[0m╚═╝""\x1b[32m ╚═════╝ ╚═════╝ ╚═════╝ ╚══════╝"" \x1b[0m╚═╝  ██╗╚═╝\n" );
       printf("\t\t\t\t\t\t\tPress A Key To Enter The Pogram!");
       getchar();

       menu();
}
void fordelay (int j)
{
  int i, k;
  for (i = 0; i < j; i++)
    k = i;
}

void menu ()
{
  char choice[50];
  system ("clear");
  printf ("\n\n\t\t\t\t\t\x1b[31mCOVI\x1b[37m(\x1b[32m\"CODE\"\x1b[37m);");
  printf
    ("\n\n\n\t\t\t\x1b[33m\xB2\xB2\xB2\xB2\xB2\xB2\xB2\x1b[32m WELCOME TO THE MAIN MENU \x1b[33m\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf
    ("\n\n\t\t\x1b[32m1.\x1b[33mLog in\n\t\t\x1b[32m2.\x1b[33mCreate a new account\n\t\t\x1b[32m3.\x1b[33mForgot password?\n\n\n\n\n\t\t\x1b[32mEnter your choice:");
  scanf ("%s", choice);

  system ("clear");
    if(strcmp(choice,"Log")==0 || strcmp(choice,"1")==0)
      log_in ();
    if(strcmp(choice,"Creat")==0 || strcmp(choice,"2")==0)
      new_acc ();
    if(strcmp(choice,"Forgot")==0 || strcmp(choice,"3")==0)
      forgot_pass ();

    
}

void new_acc ()
{
  char choice[50];
  system ("clear");
  printf ("\n\n\t\t\x1b[32mchoose your account type:");
  printf
    ("\n\n\t\t\x1b[32m1.\x1b[33mNormal user\n\t\t\x1b[32m2.\x1b[33mBusiness owner\n\t\t\x1b[32mEnter your choice:");
  scanf ("%s", choice);
    if(strcmp(choice,"Normal")==0 || strcmp(choice,"1")==0)
      Normal_user ();
    if(strcmp(choice,"Business")==0 || strcmp(choice,"2")==0)
      Bns_owner ();
    
}

void Normal_user ()
{
    system ("clear");
    FILE *normalusers;
    normalusers=fopen("normalusers.txt","a+");
  printf ("\x1b[33mEnter your name:");
  getchar ();
  fgets (NormalUser.name_n, 20, stdin);
  while (NormalUser.name_n[0] == '\n')
    {
      printf ("\x1b[32mname field is empty try again:");
      fgets (NormalUser.name_n, sizeof (NormalUser.name_n), stdin);
    }
    NormalUser.name_n[strlen(NormalUser.name_n)-1]='\0';
    //strcpy(meet1.name,NormalUser.name_n);
    
  printf ("\x1b[33mEnter your last name:");
  //getchar();
  fgets (NormalUser.lastname_n, 20, stdin);
  while (NormalUser.lastname_n[0] == '\n')
    {
      printf ("\x1b[32mlastname field is empty try again:");
      fgets (NormalUser.lastname_n, sizeof (NormalUser.lastname_n), stdin);
    }
     NormalUser.lastname_n[strlen(NormalUser.lastname_n)-1]='\0';
  printf ("\x1b[33mEnter your codemeli:");
  //getchar();
  fgets (NormalUser.codemeli_n, 20, stdin);
  while (NormalUser.codemeli_n[0] == '\n')
    {
      printf ("\x1b[32mcodemeli field is empty try again:");
      fgets (NormalUser.codemeli_n, sizeof (NormalUser.codemeli_n), stdin);
    }
     NormalUser.codemeli_n[strlen(NormalUser.codemeli_n)-1]='\0';
  printf ("\x1b[33mEnter your username:");
  //getchar();
  fgets (NormalUser.username_n, 20, stdin);
  while (NormalUser.username_n[0] == '\n')
    {
      printf ("\x1b[32musername field is empty try again:");
      fgets (NormalUser.username_n, sizeof (NormalUser.username_n), stdin);
    }
     NormalUser.username_n[strlen(NormalUser.username_n)-1]='\0';
  printf ("\x1b[33mEnter your password:");
  //getchar();
  fgets (NormalUser.password_n, 20, stdin);
  while (NormalUser.password_n[0] == '\n')
    {
      printf ("\x1b[32mpassword field is empty try again:");
      fgets (NormalUser.password_n, sizeof (NormalUser.password_n), stdin);
    }
   NormalUser.password_n[strlen(NormalUser.password_n)-1]='\0';
  printf ("\x1b[33mRepeat your password:");
  //getchar();
  fgets (NormalUser.password1_n, 20, stdin);
  while (NormalUser.password1_n[0] == '\n')
    {
      printf ("\x1b[32mRepeat password field is empty try again:");
      fgets (NormalUser.password1_n, sizeof (NormalUser.password1_n), stdin);
    }
    NormalUser.password1_n[strlen(NormalUser.password1_n)-1]='\0';
  while (strcmp (NormalUser.password1_n, NormalUser.password_n) != 0)
    {
      printf ("\x1b[32mThe second password didnt match try again:");
      //getchar();
      fgets (NormalUser.password1_n, sizeof (NormalUser.password1_n), stdin);
     NormalUser.password1_n[strlen(NormalUser.password1_n)-1]='\0';
    }
   
  printf ("\x1b[33mEnter your email address:");
  //getchar()
  fgets (NormalUser.email_n, 50, stdin);
  while (NormalUser.email_n[0] == '\n')
    {
      printf ("\x1b[32memail field is empty try again:");
      fgets (NormalUser.email_n, sizeof (NormalUser.email_n), stdin);
    }
     NormalUser.email_n[strlen(NormalUser.email_n)-1]='\0';
  printf ("\x1b[33mEnter your blood group(optional):");
  fgets (NormalUser.blood_n, 10, stdin);
  if (NormalUser.blood_n[0] == '\n')
    printf ("\x1b[33mEnter your height(optional):");
  else
    printf ("\x1b[33mEnter your height(optional):");
    NormalUser.blood_n[strlen(NormalUser.blood_n)-1]='\0';
  fgets (NormalUser.height_n, 5, stdin);
  if (NormalUser.height_n[0] == '\n')
    printf ("\x1b[33mEnter your weight(optional):");
  else
    printf ("\x1b[33mEnter your weight(optional):");
    NormalUser.height_n[strlen(NormalUser.height_n)-1]='\0';
  fgets (NormalUser.weight_n, 5, stdin);
  if (NormalUser.weight_n[0] == '\n')
    printf ("\x1b[33mEnter your age(optional):");
  else
    printf ("\x1b[33mEnter your age(optional):");
    NormalUser.weight_n[strlen(NormalUser.weight_n)-1]='\0';
  fgets (NormalUser.age_n,5,stdin);
  NormalUser.dead=0;
  NormalUser.hr = 0;
  strcpy(NormalUser.condition,"\x1b[32msafe");
  NormalUser.age_n[strlen(NormalUser.age_n)-1]='\0';
  fwrite(&NormalUser,sizeof(struct user_n),1,normalusers);
  //fwrite("\n",sizeof("\n"),1,normalusers);
  fclose(normalusers);
   log_in ();


}

void Bns_owner ()
{
    FILE *businessowners;
    businessowners = fopen("businessowners.txt","a+");
  system ("clear");
  printf ("\x1b[33mEnter your name:");
  getchar ();
  fgets (BusinessOwner.name_b, 20, stdin);
  while (BusinessOwner.name_b[0] == '\n')
    {
      printf ("\x1b[32mname field is empty try again:");
      fgets (BusinessOwner.name_b, sizeof (BusinessOwner.name_b), stdin);
    }
     BusinessOwner.name_b[strlen(BusinessOwner.name_b)-1]='\0';
  printf ("\x1b[33mEnter your last name:");
  //getchar();
  fgets (BusinessOwner.lastname_b, 20, stdin);
  while (BusinessOwner.lastname_b[0] == '\n')
    {
      printf ("\x1b[32mlastname field is empty try again:");
      fgets (BusinessOwner.lastname_b, sizeof (BusinessOwner.lastname_b), stdin);
    }
     BusinessOwner.lastname_b[strlen(BusinessOwner.lastname_b)-1]='\0';
  printf ("\x1b[33mEnter your codemeli:");

  fgets (BusinessOwner.codemeli_b, 20, stdin);
  while (BusinessOwner.codemeli_b[0] == '\n')
    {
      printf ("\x1b[32mcodemeli field is empty try again:");
      fgets (BusinessOwner.codemeli_b, sizeof (BusinessOwner.codemeli_b), stdin);
    }
   BusinessOwner.codemeli_b[strlen(BusinessOwner.codemeli_b)-1]='\0';
  printf ("\x1b[33mEnter your username:");
  //getchar();
  fgets (BusinessOwner.username_b, 20, stdin);
  while (BusinessOwner.username_b[0] == '\n')
    {
      printf ("\x1b[32musername field is empty try again:");
      fgets (BusinessOwner.username_b, sizeof (BusinessOwner.username_b), stdin);
    }
    BusinessOwner.username_b[strlen(BusinessOwner.username_b)-1]='\0';
  printf ("\x1b[33mEnter your password:");
  //getchar();
  fgets (BusinessOwner.password_b, 20, stdin);
  while (BusinessOwner.password_b[0] == '\n')
    {
      printf ("\x1b[32mpassword field is empty try again:");
      fgets (BusinessOwner.password_b, sizeof (BusinessOwner.password_b), stdin);
    }
    BusinessOwner.password_b[strlen(BusinessOwner.password_b)-1]='\0';
  printf ("\x1b[33mRepeat your password:");
  //getchar();
  fgets (BusinessOwner.password1_b, 20, stdin);
  while (BusinessOwner.password1_b[0] == '\n')
    {
      printf ("\x1b[32mRepeat password field is empty try again:");
      fgets (BusinessOwner.password1_b, sizeof (BusinessOwner.password1_b), stdin);
    }
    BusinessOwner.password1_b[strlen(BusinessOwner.password1_b)-1]='\0';
  while (strcmp (BusinessOwner.password1_b, BusinessOwner.password_b) != 0)
    {
      getchar ();
      printf ("\x1b[32mThe second password didnt match try again:");
      fgets (BusinessOwner.password1_b, sizeof (BusinessOwner.password1_b), stdin);
      BusinessOwner.password1_b[strlen(BusinessOwner.password1_b)-1]='\0';
    }
  printf ("\x1b[33mEnter your email address:");
  //getchar();
  fgets (BusinessOwner.email_b, 50, stdin);
  while (strcmp(BusinessOwner.email_b, "\n")==0)
    {
      printf ("\x1b[32memail field is empty try again:");
      fgets (BusinessOwner.email_b, sizeof (BusinessOwner.email_b), stdin);
    }
    BusinessOwner.email_b[strlen(BusinessOwner.email_b)-1]='\0';
  printf ("\x1b[33mEnter name of the place that you work:");
  //getchar ();
  fgets (BusinessOwner.place_b, 20, stdin);
  while (BusinessOwner.place_b[0] == '\n')
    {
      printf ("\x1b[32mplace field is empty try again:");
      fgets (BusinessOwner.place_b, sizeof (BusinessOwner.place_b), stdin);
    }
     BusinessOwner.place_b[strlen(BusinessOwner.place_b)-1]='\0';
  printf ("\x1b[33mEnter name of the city that you work:");
   //getchar ();
   fgets (BusinessOwner.city_b, 20, stdin);
   while (BusinessOwner.city_b[0] == '\n')
    {
      printf ("\x1b[32mcity field is empty try again:");
      fgets (BusinessOwner.city_b, sizeof (BusinessOwner.city_b), stdin);
    }
     BusinessOwner.city_b[strlen(BusinessOwner.city_b)-1]='\0';
  printf ("\x1b[33mIn which region do you work:");
   //getchar ();
   fgets (BusinessOwner.region_b, 20, stdin);
   while (BusinessOwner.region_b[0] == '\n')
    {
      printf ("\x1b[32mregion field is empty try again:");
      fgets (BusinessOwner.region_b, sizeof (BusinessOwner.region_b), stdin);
    }
     BusinessOwner.region_b[strlen(BusinessOwner.region_b)-1]='\0';
       strcpy(BusinessOwner.alert,"\x1b[0mwhite");
      fwrite(&BusinessOwner,sizeof(struct user_b),1,businessowners);
      fclose(businessowners);
    
  log_in ();



}

void forgot_pass ()
{
  
  int found=0;
  char choice[50];
  system ("clear");
  getchar ();
  printf ("\x1b[33mEnter your username:");
  fgets (username_f, 20, stdin);
  while (username_f[0] == '\n')
    {
     
      printf ("\x1b[32musername field is empty try again:");
      fgets (username_f, 20, stdin);
    }
    username_f[strlen(username_f)-1]='\0';
  printf ("\x1b[33mEnter your codemeli:");
  fgets (codemeli_f, 20, stdin);
  
  while (codemeli_f[0] == '\n')
    {
      printf ("\x1b[32mcodemeli field is empty try again:");
      fgets (codemeli_f, 20, stdin);
    }
    codemeli_f[strlen(codemeli_f)-1]='\0';
  printf ("\x1b[33mEnter your email address:");
  fgets (email_f, 50, stdin);
  
  while (email_f[0] == '\n')
    {
      printf ("\x1b[32mEmail field is empty try again:");
      fgets (email_f, 50, stdin);
    }
    email_f[strlen(email_f)-1]='\0';
    FILE *admin;
    admin = fopen("admin.txt","r+");
    fread(&modir,sizeof(struct user_a),1,admin);
    if(strcmp(username_f,modir.username) == 0 && strcmp(codemeli_f,modir.codemeli) == 0 && strcmp(email_f,modir.email) == 0)
    {  found=1;
       printf ("\x1b[33mEnter your new password:");
      fgets (password_f, 20, stdin);
      while (password_f[0] == '\n')
    {
      printf ("\x1b[32mpassword field is empty try again:");
      getchar ();
      fgets (password_f, sizeof (password_f), stdin);
    }
    password_f[strlen(password_f)-1]='\0';
      printf ("\x1b[33mRepeat your new password:");
      //getchar ();
      fgets (password1_f, 20, stdin);
      while (password1_f[0] == '\n')
    {
      printf ("\x1b[32mRepeat password field is empty try again:");
      //getchar ();
      fgets (password1_f, sizeof (password1_f), stdin);
    }
    password1_f[strlen(password1_f)-1]='\0';
   

      while (strcmp (password1_f, password_f) != 0)
    {
      printf ("\x1b[32mThe second password didnt match try again:");
      //getchar ();
      fgets (password1_f, sizeof (password1_f), stdin);
      password1_f[strlen(password1_f)-1]='\0';
    }
      strcpy(modir.password,password_f);
       rewind(admin);
      fwrite(&modir,sizeof(struct user_a),1,admin);
      fclose(admin);
      log_in();
    }
else if(found==0)
{
    FILE *normalusers;
    normalusers = fopen("normalusers.txt","r+");
    while(fread(& NormalUser,sizeof(struct user_n),1,normalusers))
  {
      

  if (strcmp (username_f, NormalUser.username_n) == 0 &&
  strcmp (codemeli_f, NormalUser.codemeli_n) == 0 &&
  strcmp(email_f,NormalUser.email_n) == 0)
     
  {
      printf ("\x1b[33mEnter your new password:");
      fgets (password_f, 20, stdin);
      while (password_f[0] == '\n')
      {
      printf ("\x1b[32mpassword field is empty try again:");
      getchar ();
      fgets (password_f, sizeof (password_f), stdin);
    }
    password_f[strlen(password_f)-1]='\0';
      printf ("\x1b[33mRepeat your new password:");
      //getchar ();
      fgets (password1_f, 20, stdin);
      while (password1_f[0] == '\n')
    {
      printf ("\x1b[32mRepeat password field is empty try again:");
      //getchar ();
      fgets (password1_f, sizeof (password1_f), stdin);
    }
    password1_f[strlen(password1_f)-1]='\0';
      while (strcmp (password1_f, password_f) != 0)
    {
      printf ("\x1b[32mThe second password didnt match try again:");
      //getchar ();
      fgets (password1_f, sizeof (password1_f), stdin);
      password1_f[strlen(password1_f)-1]='\0';
    }
      strcpy(NormalUser.password_n,password_f);
      fseek(normalusers,(-1)*sizeof(struct user_n),SEEK_CUR);
      fwrite(&NormalUser,sizeof(struct user_n),1,normalusers);
      found=1;
      fclose(normalusers);
      log_in();
  }
  //fread(& enter,sizeof("\n"),1,normalusers);
  }
}
else if(found==0)
{
  FILE *businessowners;
  businessowners = fopen("businessowners.txt","r+");
  while(fread(& BusinessOwner,sizeof(struct user_b),1,businessowners))
  {
      
  if (strcmp (username_f, BusinessOwner.username_b) == 0
       && strcmp (codemeli_f, BusinessOwner.codemeli_b) == 0
     &&strcmp (email_f, BusinessOwner.email_b) == 0)
      
  {
      printf ("\x1b[33mEnter your new password:");
      fgets (password_f, 20, stdin);
      while (password_f[0] == '\n')
    {
      printf ("\x1b[32mpassword field is empty try again:");
      fgets (password_f, sizeof (password_f), stdin);
    }
    password_f[strlen(password_f)-1]='\0';
      printf ("\x1b[33mRepeat your new password:");
      fgets (password1_f, 20, stdin);
      while (password1_f[0] == '\n')
    {
      printf ("\x1b[32mRepeat password field is empty try again:");
      fgets (password1_f, sizeof (password1_f), stdin);
    }
    password1_f[strlen(password1_f)-1]='\0';
      while (strcmp (password1_f, password_f) != 0)
    {
      printf ("\x1b[32mThe second password didnt match try again:");
      getchar ();
      fgets (password1_f, sizeof (password1_f), stdin);
      password1_f[strlen(password1_f)-1]='\0';
    }
      strcpy (BusinessOwner.password_b, password_f);
      fseek(businessowners,(-1)*sizeof(struct user_b),SEEK_CUR);
      fwrite(&BusinessOwner,sizeof(struct user_b),1,businessowners);
      found=1;
      fclose(businessowners);
      log_in();
     
    }
  }
}

if(found==0)
{
      printf
    ("\n\n\x1b[32mNo accounts with this information!!\n\x1b[33msign up?\n\x1b[32m1.\x1b[33mYes\t\t\x1b[32m2.\x1b[33mNo(exit)\n\n\n\n\t\t\t\t\t\t\t\x1b[32m3.\x1b[33mback\n\n\x1b[32mEnter your choice:");
      scanf ("%s", choice);
      
    if(strcmp(choice,"Yes")==0 || strcmp(choice,"1")==0)
      new_acc ();
    if(strcmp(choice,"No")==0 || strcmp(choice,"2")==0)
      close1 ();
    if(strcmp(choice,"back")==0 || strcmp(choice,"3")==0)
      menu ();
    
}
}


void log_in ()
{
  //char enter[2];
  int line=0;
  int lineb=0;
  int found=0;
  int i = 0;
  char choice[40];
  system ("clear");
  getchar ();
  printf ("\n\n\t\t\x1b[33mEnter your username to login:");
  fflush (stdin);
  fgets (user1, 20, stdin);
  user1[strlen(user1)-1]='\0';
  printf ("\n\n\t\t\x1b[33mEnter the password to login:");
  fflush (stdin);
  fgets (pass, 20, stdin);
  pass[strlen(pass)-1]='\0';
 
  
  /*do
     {
     if (pass[i]!=13&&pass[i]!=8)
     {
     printf("*");
     pass[i]=getchar();
     i++;
     }
     }
     while (pass[i]!=13);
     pass[10]='\0'; */
  FILE *admin;
  admin = fopen("admin.txt","r");
    fread(&modir,sizeof(struct user_a),1,admin);
  if (strcmp (user1, modir.username) == 0 && strcmp (pass, modir.password) == 0)
{
    printf ("\n\n\x1b[32mPassword Match!\nLOADING");
    found=1;
    for (i = 0; i <= 6; i++)
    {
      fordelay (100000000);
      printf (".");
    }
      fclose(admin);
      system ("clear");
      Admin ();

}
     if(found==0)
{

    FILE *normalusers;
    normalusers = fopen("normalusers.txt","r+");
    
    while(fread(& NormalUser,sizeof(struct user_n),1,normalusers))
{     line++;
      if(strcmp(user1,NormalUser.username_n) == 0 && strcmp(pass,NormalUser.password_n) == 0)
  {
      printf ("\n\n\x1b[32mPassword Match!\nLOADING");
      found=1;
      
     for (i = 0; i <= 6; i++)
       {
         fordelay (100000000);
          printf (".");
       }
    fclose(normalusers);
     system ("clear");
    Normaln_user2 (line);
    break;
    
  }
}

}
 if(found==0)
{
   FILE *businessowners;
    businessowners = fopen("businessowners.txt","r");
    while(fread(& BusinessOwner,sizeof(struct user_b),1,businessowners))
{     lineb++;
      if(strcmp(BusinessOwner.username_b,user1) == 0 && strcmp(BusinessOwner.password_b,pass) == 0)
  {
      printf ("\n\n\x1b[32mPassword Match!\nLOADING");
      found=1;
      
      for (i = 0; i <= 6; i++)
     {
      fordelay (100000000);
      printf (".");
     }
    fclose(businessowners);
   system ("clear");
   Bnsb_owner2 (lineb);
   break;
  }
}
}

if(found==0)
  {
     printf
    ("\n\n\x1b[32mNo accounts with this username!!\n\x1b[33msign up?\n\x1b[32m1.\x1b[33mYes\t\t\x1b[32m2.\x1b[33mNo(exit)\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\x1b[32m3.\x1b[33mback\n\n\x1b[32mEnter your choice:");
      scanf ("%s",choice);
    if(strcmp(choice,"Yes")==0 || strcmp(choice,"1")==0)
      new_acc ();
    if(strcmp(choice,"No")==0 || strcmp(choice,"2")==0)
      close1 ();
    if(strcmp(choice,"back")==0 || strcmp(choice,"3")==0)
      menu ();

  }

}

    

void Normaln_user2 (int line)
{
   system ("clear");
   char choice[50];
   FILE *normalusers;
   normalusers = fopen("normalusers.txt","r");
   fseek(normalusers,(line-1)*sizeof(struct user_n),SEEK_SET);
   fread(& NormalUser,sizeof(struct user_n),1,normalusers);
   time_t t = time (NULL);
   
   if(strcmp(NormalUser.condition,"\x1b[31msick")!= 0 && strcmp(NormalUser.condition,"\x1b[32safe") == 0 && difftime(t,NormalUser.time)>604800) {
   if(strcmp(NormalUser.condition,"\x1b[34mdangerouse") == 0){
   strcpy(NormalUser.condition,"\x1b[33msuspected");
   NormalUser.time = t;
   }
   if(strcmp(NormalUser.condition,"\x1b[33msuspected") == 0 && difftime(t,NormalUser.time)>604800) {
   strcpy(NormalUser.condition,"\x1b[32msafe");
   NormalUser.time = t;
   }
   fseek(normalusers,-sizeof(struct user_n),SEEK_CUR);
   fwrite(&NormalUser,sizeof(struct user_n),1,normalusers);
   }
   
     printf
      ("\n\n\n\t\t\t\x1b[32m\xB2\xB2\xB2\xB2\xB2\x1b[33mYour health condition is:%s\x1b[32m\xB2\xB2\xB2\xB2\xB2",
       NormalUser.condition);
    fclose(normalusers);
  puts
    ("\n\n\n\t\t\t\x1b[32m\xB2\xB2\xB2\xB2\xB2 \x1b[33mWhat do you want to do?! \x1b[32m\xB2\xB2\xB2\xB2\xB2");
  puts
    ("\n\n\t\t\x1b[32m1.\x1b[33mEdit information\n\t\t\x1b[32m2.\x1b[33mRecent health condition\n\t\t\x1b[32m3.\x1b[33mHealth history\n\t\t\x1b[32m4.\x1b[33mRecent meetings\n\t\t\x1b[32m5.\x1b[33mMeetings history\n\t\t\x1b[32m6.\x1b[33mRecent places\n\t\t\x1b[32m7.\x1b[33mPlace history\n\t\t\x1b[32m8.\x1b[33mcovid_19 statistics\n\t\t\x1b[32m9.\x1b[33mNear hospitals\n\t\t\x1b[32m10.\x1b[33mWe beat corona!\n\t\t\x1b[32m11.\x1b[33mback\t\t\t\x1b[32m12.\x1b[33mexit\n\n\n\n\n\t\t\x1b[32mEnter your choice:");
  scanf ("%s",choice);
   if(strcmp(choice,"Edit information") == 0 || strcmp(choice,"1") == 0)
      edit1n(line);
   if(strcmp(choice,"Recent health condition") == 0 || strcmp(choice,"2") == 0)
     health1(line);
   if(strcmp(choice,"Health history") == 0 || strcmp(choice,"3") == 0)
      health_history1(line);
   if(strcmp(choice,"Recent meetings") == 0 || strcmp(choice,"4") == 0)
      meets1(line);
   if(strcmp(choice,"Meetings history") == 0 || strcmp(choice,"5") == 0)
      meet_history1(line);
   if(strcmp(choice,"Recent places") == 0 || strcmp(choice,"6") == 0)
      place_n1(line);
   if(strcmp(choice,"Place history") == 0 || strcmp(choice,"7") == 0)
      place_history1(line);
   if(strcmp(choice,"covide_19 statistics") == 0 || strcmp(choice,"8") == 0)
      covid_statistics(line);
  if(strcmp(choice,"Near hospitals") == 0 || strcmp(choice,"9") == 0)
      near_hospitals(line);
  if(strcmp(choice,"We beat corona!") == 0 || strcmp(choice,"10") == 0)
      beat(line);
   if(strcmp(choice,"back") == 0 || strcmp(choice,"11") == 0)
      menu ();
   if(strcmp(choice,"exit") == 0 || strcmp(choice,"12") == 0)
      close1 ();
}


void health1 (int line)
{
  system ("clear");
  FILE *normalusers;
  FILE *health;
  health = fopen("health.txt","a+");
  normalusers = fopen("normalusers.txt","r+");
  fseek(normalusers,(line-1)*sizeof(struct user_n),SEEK_SET);
  fread(&NormalUser,sizeof(struct user_n),1,normalusers);
  
  int choice;
  int i = 0;
  puts
    ("\n\n\t\t\x1b[32mContinuous dry cough?\n\t\t\x1b[33m1.Yes\t\t2.No\n\n\n\t\t\x1b[32mEnter your choice:");
  scanf ("%d", &choice);
  if (choice == 1)
    i = i + 30;
  else
    i = i + 0;
  puts
    ("\n\n\t\t\x1b[32mTemperature over than 37? \n\t\t\x1b[33m1.Yes\t\t2.No\n\n\n\t\t\x1b[32mEnter your choice:");
  scanf ("%d", &choice);
  if (choice == 1)
    i = i + 20;
  else
    i = i + 0;
  puts
    ("\n\n\t\t\x1b[32mHard breathing? \n\t\t\x1b[33m1.Yes\t\t2.No\n\n\n\t\t\x1b[32mEnter your choice:");
  scanf ("%d", &choice);
  if (choice == 1)
    i = i + 20;
  else
    i = i + 0;
  puts ("\n\n\t\t\x1b[32mPain?\n\t\t\x1b[33m1.Yes\t\t2.No\n\n\n\t\t\x1b[32mEnter your choice:");
  scanf ("%d", &choice);
  if (choice == 1)
    i = i + 15;
  else
    i = i + 0;
  puts
    ("\n\n\t\t\x1b[32msore throat?\n\t\t\x1b[33m1.Yes\t\t2.No\n\n\n\t\t\x1b[32mEnter your choice:");
  scanf ("%d", &choice);
  if (choice == 1)
    i = i + 15;
  else
    i = i + 0;
    if(NormalUser.hr<i)
    {

    NormalUser.hr = i;
  if (i >= 0 && i < 15)
    {
      strcpy (NormalUser.condition, "\x1b[32msafe");
      //code1=1;
    }
  else if (i >= 15 && i < 50)
    {
      strcpy (NormalUser.condition, "\x1b[33msuspected");
      //code1=2;
    }
  else if (i >= 50 && i < 75)
    {
      strcpy (NormalUser.condition, "\x1b[34mdangerous");
      //code1=3;
    }
  else if (i >= 75 && i <= 100)
    {
      strcpy (NormalUser.condition, "\x1b[31msick");
     //code1=4;
     FILE *place;
     FILE *businessowners;
     place = fopen("place.txt","r+");
     businessowners = fopen("businessowners.txt","r+");
     time_t t = time (NULL);
     while(fread(&plc1,sizeof(struct visit_b),1,place))
     { rewind(businessowners);
       if(strcmp(NormalUser.name_n,plc1.name) == 0 && difftime(t,plc1.time)>604800){
         while(fread(&BusinessOwner,sizeof(struct user_b),1,place)){
           if(strcmp(BusinessOwner.place_b,plc1.place) == 0){
        strcpy(BusinessOwner.place_b,"\x1b[31mRed");
       fseek(businessowners,-sizeof(struct user_b),SEEK_CUR);
       fwrite(&BusinessOwner,sizeof(struct user_b),1,businessowners);
       break;
       }

     }
  }


}
fclose(businessowners);
fclose(place);
    }
    strcpy(list1.code,NormalUser.condition);
    strcpy(list1.name,NormalUser.name_n);
    time_t t = time(NULL);
    list1.time = t;
    fseek(health,0,SEEK_END);
    fwrite(&list1,sizeof(struct visit_h),1,health);
    NormalUser.time = t;
    fseek(normalusers,(line-1)*sizeof(struct user_n),SEEK_SET);
    fwrite(&NormalUser,sizeof(struct user_n),1,normalusers);
    }
    if(i<NormalUser.hr)
    {
      printf("you are still %s",NormalUser.condition);
    }
    fclose(normalusers);
    fclose(health);
    Normaln_user2 (line);
}


void close1 (void)
{
  
  system ("clear");
  printf ("\n\n\n\n\x1b[31mThis project has ended!");
  exit(0);
}
 void edit1n(int line)
 {
    system("clear");
    FILE *normalusers;
    normalusers = fopen("normalusers.txt","r+");
    fseek(normalusers,(line-1)*sizeof(struct user_n),SEEK_SET);
    fread(& NormalUser,sizeof(struct user_n),1,normalusers);
    
   
   
   
    char choice[100];
    
    
    printf("\t\x1b[33m1.\x1b[32mLastname: \x1b[33m%s\n",NormalUser.lastname_n);
    printf("\t\x1b[33m2.\x1b[32mCodemeli: \x1b[33m%s\n",NormalUser.codemeli_n);
    printf("\t\x1b[33m3.\x1b[32mUsername: \x1b[33m%s\n",NormalUser.username_n);
    printf("\t\x1b[33m4.\x1b[32mEmail: \x1b[33m%s\n",NormalUser.email_n);
    printf("\t\x1b[33m5.\x1b[32mBlood Group: \x1b[33m%s\n",NormalUser.blood_n);
    printf("\t\x1b[33m6.\x1b[32mHeight: \x1b[33m%s\n",NormalUser.height_n);
    printf("\t\x1b[33m7.\x1b[32mWeight: \x1b[33m%s\n",NormalUser.weight_n);
    printf("\t\x1b[33m8.\x1b[32mAge: \x1b[33m%s\n",NormalUser.age_n);
    printf("\t\x1b[33m9.\x1b[32mback\t\t\x1b[33m10.\x1b[32mexit\n");
    
    while(1){

    printf("\x1b[33mwhich feild would you like to edit?");
    scanf("%s",choice);
   
    if(strcmp(choice,"Lastname")==0 || strcmp(choice,"1")==0)
    {
      printf("\x1b[32mEnter your Lastname:");
      getchar();
      fgets (NormalUser.lastname_n, 20, stdin);
      NormalUser.lastname_n[strlen(NormalUser.lastname_n)-1]='\0';
     
      
    }
    if(strcmp(choice,"Codemeli")==0 || strcmp(choice,"2")==0)
    {
      printf("\x1b[32mEnter your Codemeli:");
      getchar ();
      fgets (NormalUser.codemeli_n, 20, stdin);
      NormalUser.codemeli_n[strlen(NormalUser.codemeli_n)-1]='\0';
      
      
    }
    if(strcmp(choice,"Username")==0 || strcmp(choice,"3")==0)
    {
      printf("\x1b[32mEnter your Username:");
      getchar ();
      fgets (NormalUser.username_n, 20, stdin);
      NormalUser.username_n[strlen(NormalUser.username_n)-1]='\0';
      
      
    }
     if(strcmp(choice,"Email")==0 || strcmp(choice,"4")==0)
    {
      printf("\x1b[32mEnter your Username:");
      getchar ();
      fgets (NormalUser.email_n, 20, stdin);
      NormalUser.email_n[strlen(NormalUser.email_n)-1]='\0';
     
      
    }
    if(strcmp(choice,"Blood")==0 || strcmp(choice,"5")==0)
    {
      printf("\x1b[32mEnter your Blood group:");
      getchar ();
      fgets (NormalUser.blood_n, 20, stdin);
      NormalUser.blood_n[strlen(NormalUser.blood_n)-1]='\0';
      
      
    }
      if(strcmp(choice,"Height")==0 || strcmp(choice,"6")==0)
    {
      printf("\x1b[32mEnter your Height:");
      getchar ();
      fgets (NormalUser.height_n, 20, stdin);
      NormalUser.height_n[strlen(NormalUser.height_n)-1]='\0';
     
      
    }
      if(strcmp(choice,"Weight")==0 || strcmp(choice,"7")==0)
    {
      printf("\x1b[32mEnter your Weight:");
      getchar ();
      fgets (NormalUser.weight_n, 20, stdin);
      NormalUser.weight_n[strlen(NormalUser.weight_n)-1]='\0';
      
      
    }
      if(strcmp(choice,"Age")==0 || strcmp(choice,"8")==0)
    {
      printf("\x1b[32mEnter your Age:");
      getchar ();
      fgets (NormalUser.age_n, 20, stdin);
      NormalUser.age_n[strlen(NormalUser.age_n)-1]='\0';
      
    }
    //fread(&enter,sizeof("\n"),1,normalusers);
   
      if(strcmp(choice,"back")==0 || strcmp(choice,"9")==0)
      {
        fseek(normalusers,(line-1)*sizeof(struct user_n),SEEK_SET);
        fwrite(& NormalUser,sizeof(struct user_n),1,normalusers);
        fclose(normalusers);
        Normaln_user2(line);

      }
      if(strcmp(choice,"exit")==0 || strcmp(choice,"10")==0)
     {
       fseek(normalusers,(line-1)*sizeof(struct user_n),SEEK_SET);
        fwrite(& NormalUser,sizeof(struct user_n),1,normalusers);
         fclose(normalusers);
         close1();
     }
     

    }
 }
 
 
 void health_history1(int line)
 {
     system ("clear");
     printf("\t\x1b[32HHealth History");
     printf("\n\n");
     int count=0;
     char choice[50];
     FILE *health;
     FILE *normalusers;
     normalusers = fopen("normalusers.txt","r+");
     fseek(normalusers,(line-1)*sizeof(struct user_n),SEEK_SET);
     fread(& NormalUser,sizeof(struct user_n),1,normalusers);
     health = fopen("health.txt","r+");
     fseek(health,(-1)*sizeof(struct visit_h),SEEK_END);
     int c=0;
    while(fread(&list1,sizeof(struct visit_h),1,health))
     {
       c++;
       if(strcmp(list1.name,NormalUser.name_n) == 0)
       {
       printf("%s\t\x1b[36m%s",list1.code,ctime(&list1.time));
       count++;
       printf("\n");
       }

      fseek(health,(-1)*sizeof(struct visit_h),SEEK_CUR);
       if(count>9 || ftell(health) == 0)
       break;
       fseek(health,(-1)*sizeof(struct visit_h),SEEK_CUR);
       if(c>20)
       break;
     }


     fclose(health);
     fclose(normalusers);

      printf("\n\t\t\x1b[32m1.\x1b[33mback\t\x1b[32m2.\x1b[33mexit\n\t\x1b[32mEnter your choice:");
     scanf("%s",choice);
     if(strcmp(choice,"back") == 0 || strcmp(choice,"1") == 0)
       Normaln_user2(line);
     if(strcmp(choice,"exit") == 0 || strcmp(choice,"2") == 0)
       close1();
     
 }
 
 
void meets1(int line)
 {
     char choice[30];
     int found=0;
    system("clear");
    FILE *normalusers;
    FILE *meet;
    FILE *person;
    person = fopen("normalusers.txt","r+");
    normalusers = fopen("normalusers.txt","r+");
    meet = fopen("meet.txt","a+");
    puts("\n\n\t\x1b[32mwho did you meet recently?(Enter his/her codemeli)");
    getchar();
    fgets (codemeli_m, 20, stdin);
    codemeli_m[strlen(codemeli_m)-1]='\0';
    struct user_n person_n;
    fseek(normalusers,(line-1)*sizeof(struct user_n),SEEK_SET);
    fread(&NormalUser,sizeof(struct user_n),1,normalusers);

    while(fread(&person_n,sizeof(struct user_n),1,person))
    {
    if(strcmp(codemeli_m,person_n.codemeli_n) == 0)
   {
       strcpy(meet1.name1,NormalUser.name_n);
       strcpy(meet1.name2,person_n.name_n);
       strcpy(meet1.code1,NormalUser.condition);
       strcpy(meet1.code2,person_n.condition);
       found = 1;
       time_t t = time(NULL);
       meet1.time = t;
       fseek(meet,(line-1)*sizeof(struct visit_m),SEEK_SET);
       fwrite(&meet1,sizeof(struct visit_m),1,meet);

       
       if(strcmp(person_n.condition,"\x1b[31msick") == 0){
       strcpy(NormalUser.condition,"\x1b[34mdangerouse");
       NormalUser.time = t;
       fseek(normalusers,-sizeof(struct user_n),SEEK_CUR);
       fwrite(&NormalUser,sizeof(struct user_n),1,normalusers);
      
       }
       else if(strcmp(person_n.condition,"\x1b[34mdangerouse") == 0 &&
       strcmp(NormalUser.condition,"\x1b[32safe") == 0 ){
       strcpy(NormalUser.condition,"\x1b[33msuspectd");
       NormalUser.time = t;
       fseek(normalusers,-sizeof(struct user_n),SEEK_CUR);
       fwrite(&NormalUser,sizeof(struct user_n),1,normalusers);
       }
       else if(strcmp(NormalUser.condition,"\x1b[31msick")== 0)
       {
         strcpy(person_n.condition,"\x1b[34mdangerouse");
         person_n.time = t;
         fseek(person,-sizeof(struct user_n),SEEK_CUR);
         fwrite(&person_n,sizeof(struct user_n),1,person);
       }
        else if(strcmp(NormalUser.condition,"\x1b[34mdangerouse") == 0 &&
        strcmp(person_n.condition,"\x1b[32safe") == 0)
       {
         strcpy(person_n.condition,"\x1b[33msuspected");
         person_n.time = t;
         fseek(person,-sizeof(struct user_n),SEEK_CUR);
         fwrite(&person_n,sizeof(struct user_n),1,person);
       }
       break;
       
       }
                
    }
    fclose(meet);
    fclose(normalusers);
    fclose(person);
           
    
    if(found == 0){
        printf("\n\t\x1b[33mThere is no saved account with this codemeli");
        printf("\n\t\t\x1b[32m1.\x1b[33mback\t\t\x1b[32m2.\x1b[33mexit\n\t\t\x1b[33mEnter your choice:");
        scanf("%s",choice);
        if(strcmp(choice,"back")==0 || strcmp(choice,"1")==0)
         Normaln_user2(line);
        if(strcmp(choice,"exit")==0 || strcmp(choice,"2")==0)
        close1();
      
    }
  
    
  
    getchar();
    Normaln_user2(line);
      
    
 }
 void meet_rec(char *name)
 {
   FILE *meet;
   FILE *normalusers;
   normalusers = fopen("normalusers.txt","r");
   meet = fopen("meet.txt","r");
   while(fread(&meet1,sizeof(struct visit_m),1,meet))
   {
     if(strcmp(meet1.name1,name) == 0)
     {
       
       while(fread(&NormalUser,sizeof(struct user_n),1,normalusers))
       {
         if(strcmp(NormalUser.name_n,meet1.name2) == 0){
         if(strcmp(meet1.code1,"\x1b[31msick") == 0){
           strcpy(NormalUser.condition,"\x1b[34mdangerouse");
           fseek(normalusers,-sizeof(struct user_n),SEEK_CUR);
           fwrite(&NormalUser,sizeof(struct user_n),1,normalusers);
         }
         else if(strcmp(meet1.code1,"\x1b[34mdangerouse") == 0 && strcmp(meet1.code2,"\x1b[31msick") != 0)
         {
           strcpy(NormalUser.condition,"\x1b[33msuspected");
           fseek(normalusers,-sizeof(struct user_n),SEEK_CUR);
           fwrite(&NormalUser,sizeof(struct user_n),1,normalusers);
           }
         }
        }
         while(fread(&NormalUser,sizeof(struct user_n),1,normalusers))
         {
           if(strcmp(NormalUser.name_n,meet1.name1) == 0){
       
         if(strcmp(meet1.code2,"\x1b[31msick" )== 0)
         {
           strcpy(NormalUser.condition,"\x1b[34mdangerouse");
           fseek(normalusers,-sizeof(struct user_n),SEEK_CUR);
           fwrite(&NormalUser,sizeof(struct user_n),1,normalusers);
         }
         if(strcmp(meet1.code2,"\x1b[34mdangerouse")== 0 && strcmp(meet1.code1,"\x1b[31msick") != 0)
         {
           strcpy(NormalUser.condition,"\x1b[33msuspected");
           fseek(normalusers,-sizeof(struct user_n),SEEK_CUR);
           fwrite(&NormalUser,sizeof(struct user_n),1,normalusers);
         }

       }
    }
         

   }
       

   
 }
     fclose(normalusers);
     fclose(meet);
 }
 

void meet_history1(int line)
{
    system("clear");
    int count = 0;
    printf("\n\n\n\t\t\t\t\x1b[35mMeet History");
    printf("\n\n");
    char choice[50];
    FILE *meet;
    FILE* normalusers;
    normalusers = fopen("normalusers.txt","r+");
    meet = fopen("meet.txt","r");
    fseek(normalusers,(line-1)*sizeof(struct user_n),SEEK_SET);
    fread(&NormalUser,sizeof(struct user_n),1,normalusers);
    fseek(meet,(-1)*sizeof(struct visit_m),SEEK_END);
    while(fread(&meet1,sizeof(struct visit_m),1,meet))
    {
      if(strcmp(meet1.name1,NormalUser.name_n) == 0)
      {
       printf("\x1b[36m%s\t%s\t\x1b[36m%s",meet1.name2,meet1.code2,ctime(&meet1.time));
       printf("\n");
      }
      if(strcmp(meet1.name2,NormalUser.name_n) == 0)
      {
  
       printf("\x1b[36m%s\t%s\t\x1b[36m%s",meet1.name1,meet1.code1,ctime(&meet1.time));
       count++;
       printf("\n");
      }
      fseek(meet,(-1)*sizeof(struct visit_m),SEEK_CUR);
       if(count>9 || ftell(meet) == 0)
       break;
       fseek(meet,(-1)*sizeof(struct visit_m),SEEK_CUR);
      }
    fclose(meet);
    fclose(normalusers);
    printf("\n\t\t\t\t\x1b[33m1.\x1b[32mback\t\x1b[33m2.\x1b[32mexit\n\t\t\x1b[32mEnter your choice:");
    scanf("%s",choice);
    if(strcmp(choice,"back")==0 || strcmp(choice,"1")==0)
       Normaln_user2(line);
    if(strcmp(choice,"exit")==0 || strcmp(choice,"2")==0)
       close1();
    
}

void place_n1(int line)
{
    system("clear");
    int result=0;
    FILE *place;
    FILE *normalusers;
    FILE *businessowners;
    normalusers = fopen("normalusers.txt","r+");
    businessowners = fopen("businessowners.txt","r+");
    place = fopen("place.txt","a+");
    fseek(normalusers,(line-1)*sizeof(struct user_n),SEEK_SET);
    fread(&NormalUser,sizeof(struct user_n),1,normalusers);
    
    char choice[50];
    printf("\n\n\t\t\x1b[33mEnter the name of the place, that you have gone recently:");
    getchar ();
    fgets (place_m, 20, stdin);
    place_m[strlen(place_m)-1]='\0';
    while(fread(& BusinessOwner,sizeof(struct user_b),1,businessowners))
    {
      if(strcmp(BusinessOwner.place_b,place_m) == 0)
      {
         if(strcmp(BusinessOwner.alert,"\x1b[31mRed") == 0 && strcmp(NormalUser.condition,"\x1b[32msafe") == 0)
         {
           printf("\n\t\t\x1b[32mThis place is under %s \x1b[32malert, do you still want to go there?",BusinessOwner.alert);
           printf("\n\t\t\t\x1b[33m1.\x1b[32mYes\t\t\x1b[33m2.\x1b[32mNo\n\t\t\x1b[33mEnter your choice:");
           scanf("%s",choice);
           if(strcasecmp(choice,"Yes") == 0 || strcmp(choice,"1") == 0)
           {
             strcpy(NormalUser.condition,"\x1b[33msuspected");
             NormalUser.hr = 40;
             fseek(normalusers,(line-1)*sizeof(struct user_n),SEEK_SET);
             fwrite(&NormalUser,sizeof(struct user_n),1,normalusers);
             }
           else if(strcasecmp(choice,"No") == 0 || strcmp(choice,"2") == 0)
           {
             fclose(place);
             fclose(normalusers);
             fclose(businessowners);
             Normaln_user2(line);
           }
         }
         result = 1;
         break;
      }
    }
      if(result == 0)
      {
        printf("\t\x1b[35mplace not found! ");
        getchar();
        Normaln_user2(line);
      }
      else{
        strcpy(plc1.place,BusinessOwner.place_b);
        strcpy(plc1.name,NormalUser.name_n);
        strcpy(plc1.code,NormalUser.condition);
        strcpy(plc1.alert,BusinessOwner.alert);
        time_t t = time(NULL);
        plc1.time = t;
        fwrite(&plc1,sizeof(struct visit_b),1,place);
        if(strcmp(NormalUser.condition,"\x1b[31msick") == 0)
        {
          strcpy(BusinessOwner.alert,"\x1b[31mRed");
          fseek(businessowners,-sizeof(struct user_b),SEEK_CUR);
          fwrite(& BusinessOwner,sizeof(struct user_b),1,businessowners);
        }
        fclose(place);
        fclose(normalusers);
        fclose(businessowners);

        printf("\n\t\t\t\x1b[33m1.\x1b[32mback\t\t\x1b[33m2.\x1b[32mexit\n\t\t\x1b[33mEnter your choice:");
        scanf("%s",choice);
        if(strcasecmp(choice,"back") == 0 || strcmp(choice,"1") == 0)
        {
           Normaln_user2(line);
        }
        else if(strcasecmp(choice,"exit") == 0 || strcmp(choice,"2") == 0)
        {
           close1();
        }
        
      
      }
    
        
      
    
}



    
void place_history1(int line)
{
    system("clear");
    int count = 0;
    //printf("\n\n\n\t\t\t\t\x1b[35mPlace History");
    char choice[50];
    FILE *place;
    FILE *normalusers;
   normalusers = fopen("normalusers.txt","r");
   place = fopen("place.txt","r");
   fseek(normalusers,(line-1)*sizeof(struct user_n),SEEK_SET);
   fread(& NormalUser,sizeof(struct user_n),1,normalusers);
   fseek(place,(-1)*sizeof(struct visit_b),SEEK_END);
  while(fread(&plc1,sizeof(struct visit_b),1,place))
    {
      if(strcmp(plc1.name,NormalUser.name_n)==0)
      {
     printf("\t\x1b[36m%s\t\x1b[32m%s\t\x1b[36m%s", plc1.place,plc1.alert,ctime(&plc1.time));
     printf("\n");
     count++;
    }
    fseek(place,(-1)*sizeof(struct visit_b),SEEK_CUR);
    if(count>9 || ftell(place) == 0)
    break;
    fseek(place,(-1)*sizeof(struct visit_b),SEEK_CUR);
    
    }
    fclose(normalusers);
    fclose(place);

    printf("\n\t\t\x1b[33m1.\x1b[32mback\t\x1b[33m2.\x1b[32mexit\n\t\t\x1b[33mEnter your choice:");
    scanf("%s",choice);
    if(strcmp(choice,"back")==0 || strcmp(choice,"1")==0)
       Normaln_user2(line);
    if(strcmp(choice,"exit")==0 || strcmp(choice,"2")==0)
       close1();
}
void covid_statistics(int line)
{
  system("clear");

  char choice[20];
  FILE *normalusers;
  int day=0,week=0;
  normalusers = fopen("normalusers.txt","r");
  time_t t = time(NULL);
  while(fread(&NormalUser,sizeof(struct user_n),1,normalusers))
  {
    
    if(difftime(t,NormalUser.time)<86400 && strcmp(NormalUser.condition,"\x1b[31msick") == 0)
     day++;
     if(difftime(t,NormalUser.time)<604800 && strcmp(NormalUser.condition,"\x1b[31msick") == 0)
     week++;
  }
  printf("\n\t\t\x1b[36mtoday corona cases:\x1b[33m%d\n\t\t\x1b[36mThis week corona cases:\x1b[33m%d\n",day,week);
  fclose(normalusers);
   printf("\n\t\t\t\x1b[36m1.\x1b[33mback\t\t\x1b[36m2.\x1b[33mexit\n\t\t\x1b[36mEnter your choice:");
        scanf("%s",choice);
        if(strcmp(choice,"back") == 0 || strcmp(choice,"1") == 0)
         Normaln_user2(line);
        if(strcmp(choice,"exit") == 0 || strcmp(choice,"2") == 0)
        close1();
  

}
void near_hospitals(int line)
{
  system ("clear");
  FILE *hospitals;
  char city[20];
  char region[20];
  int num=0;
    printf("\n\t\t\x1b[32mEnter your city:");
  scanf("%s",city);
    printf("\n\t\t\x1b[32mEnter your region:");
  scanf("%s",region);
  hospitals = fopen("hospitals.txt","r");
  while(fread(&hospital,sizeof(struct hospital),1,hospitals))
  {
    if(strcmp(hospital.city,city) == 0 && strcmp(hospital.region,region) == 0){
    num++;
    printf("\x1b[33m%d.\x1b[32m%s\n",num,hospital.name);
    }
    
  }
  if(num==0)
  printf("\n\t\t\x1b[35mthere is no hospital near you!");
  fclose(hospitals);
  getchar();
  getchar();
  Normaln_user2(line);

}
void beat(int line)
{
  system("clear");
  printf("\n\n\n\n\n\t\t\t\t\t\t\t\x1b[31mHere are the basics of how to wear a mask:\n"
         "\n\t\t\x1b[33mClean your hands before you put your mask on, as well as before and after you take it off, and after you touch it at any time\n"
         "\t\tMake sure it covers both your nose, mouth and chin.\n"
         "\t\tWhen you take off a mask, store it in a clean plastic bag, and every day either wash it if it’s a fabric mask, or dispose of\n\t\ta medical mask in a trash bin.\n"
         "\t\tDon’t use masks with valves.\n");
  printf("\n\n\n\t\t\t\t\t\t\t\t\x1b[31mGathering advice\n");
  printf("\n\t\t\x1b[33mAlways check local regulations before attending an event.\n"
         "\n\t\tStay at home if you are feeling unwell.\n"
         "\t\tAlways comply with the following 3 basic preventive measures:\n"
         "\t\tMaintain at least 1 metre distance from others, and wear a mask if you cannot guarantee this distance.\n"
         "\t\tCover a sneeze or cough with a tissue or bent elbow, and immediately dispose of tissue in a closed-lid bin. \n\t\tAvoid touching eyes,nose and mouth.\n"
         "\t\tWash your hands frequently with soap and water, or with a hand sanitizer.\n");
      getchar();
      getchar();
      Normaln_user2(line);
}


void Bnsb_owner2 (int lineb)
{
  system ("clear");
  char choice[50];

  puts
    ("\n\n\n\t\t\t\x1b[33m\xB2\xB2\xB2\xB2\xB2 \x1b[32mWhat do you want to do?! \x1b[33m\xB2\xB2\xB2\xB2\xB2");
  puts
    ("\n\n\t\t\x1b[32m1.\x1b[33mEdit information\n\t\t\x1b[32m2.\x1b[33mPlace condition\n\t\t\x1b[32m3.\x1b[33mAntiseptic\n\t\t\x1b[32m4.\x1b[33mPeople suffering Covid-19\n\t\t\x1b[32m5.\x1b[33mexit\t\t\t\x1b[32m6.\x1b[33mback\n\n\n\n\t\t\x1b[32mEnter your choice:");
  scanf ("%s",choice);
    if(strcmp(choice,"Edit")==0 || strcmp(choice,"1")==0)
      edit1b(lineb);
    if(strcmp(choice,"Place")==0 || strcmp(choice,"2")==0)
      place1 (lineb);
    if(strcmp(choice,"Antiseptic")==0 || strcmp(choice,"3")==0)
      antiseptic1 (lineb);
    if(strcmp(choice,"People")==0 || strcmp(choice,"4")==0)
       suffering(lineb);
    if(strcmp(choice,"exit")==0 || strcmp(choice,"5")==0)
      close1 ();
    if(strcmp(choice,"back")==0 || strcmp(choice,"6")==0)
      menu ();
}

void edit1b(int lineb)
 {
    system("clear");
    FILE *businessowners;
    businessowners = fopen("businessowners.txt","r+");
    fseek(businessowners,(lineb-1)*sizeof(struct user_b),SEEK_SET);
    fread(& BusinessOwner,sizeof(struct user_b),1,businessowners);
    
   
    char choice[100];
    
    printf("\t\x1b[33m1.\x1b[32mName: \x1b[33m%s\n",BusinessOwner.name_b);
    printf("\t\x1b[33m2.\x1b[32mLastname: \x1b[33m%s\n",BusinessOwner.lastname_b);
    printf("\t\x1b[33m3.\x1b[32mCodemeli: \x1b[33m%s\n",BusinessOwner.codemeli_b);
    printf("\t\x1b[33m4.\x1b[32mUsername: \x1b[33m%s\n",BusinessOwner.username_b);
    printf("\t\x1b[33m5.\x1b[32mEmail: \x1b[33m%s\n",BusinessOwner.email_b);
    printf("\t\x1b[33m6.\x1b[32mback\t\t\x1b[33m7.\x1b[32mexit\n ");
    
    while(1){
    
    printf("\x1b[32mwhich feild would you like to edit?");
    scanf("%s",choice);
    if(strcmp(choice,"Name")==0 || strcmp(choice,"1")==0)
    {
      printf("\x1b[33mEnter your Name:");
      getchar ();
      fgets (BusinessOwner.name_b, 20, stdin);
      BusinessOwner.name_b[strlen(BusinessOwner.name_b)-1]='\0';
    }
    if(strcmp(choice,"Lastname")==0 || strcmp(choice,"2")==0)
    {
      printf("\x1b[33mEnter your Lastname:");
      getchar();
      fgets (BusinessOwner.lastname_b, 20, stdin);
      BusinessOwner.lastname_b[strlen(BusinessOwner.lastname_b)-1]='\0';
    }
    if(strcmp(choice,"Codemeli")==0 || strcmp(choice,"3")==0)
    {
      printf("\x1b[33mEnter your Codemeli:");
      getchar ();
      fgets (BusinessOwner.codemeli_b, 20, stdin);
      BusinessOwner.codemeli_b[strlen(BusinessOwner.codemeli_b)-1]='\0';
    }
    if(strcmp(choice,"Username")==0 || strcmp(choice,"4")==0)
    {
      printf("\x1b[33mEnter your Username:");
      getchar ();
      fgets (BusinessOwner.username_b, 20, stdin);
      BusinessOwner.username_b[strlen(BusinessOwner.username_b)-1]='\0';
    }
     if(strcmp(choice,"Email")==0 || strcmp(choice,"5")==0)
    {
      printf("\x1b[33mEnter your Username:");
      getchar ();
      fgets (BusinessOwner.email_b, 20, stdin);
      BusinessOwner.email_b[strlen(BusinessOwner.email_b)-1]='\0';
    }
    
      if(strcmp(choice,"back")==0 || strcmp(choice,"6")==0)
      {
        fseek(businessowners,(lineb-1)*sizeof(struct user_b),SEEK_SET);
        fwrite(& BusinessOwner,sizeof(struct user_b),1,businessowners);
        fclose(businessowners);
        Bnsb_owner2(lineb);
        //break;
      }
      if(strcmp(choice,"exit")==0 || strcmp(choice,"7")==0)
     {
      fseek(businessowners,(lineb-1)*sizeof(struct user_b),SEEK_SET);
      fwrite(& BusinessOwner,sizeof(struct user_b),1,businessowners);
      fclose(businessowners);
      close1();
      //break;
     }
      
    }
     
     
 }
 

void antiseptic1 (int lineb)
{
  system("clear");
  FILE *businessowners;
  businessowners = fopen("businessowners.txt","r+");
  fseek(businessowners,(lineb-1)*sizeof(struct user_b),SEEK_SET);
  fread(& BusinessOwner,sizeof(struct user_b),1,businessowners);
  
  char choice[50];
  
  puts
    ("\n\n\t\t\x1b[32mHave you clean and disinfect your state?\n\t\t\x1b[33m1.Yes\t\t2.No\n\n\n\t\t\x1b[32mEnter your choice:");
  scanf ("%s",choice);
  
    if(strcmp(choice,"Yes")==0 || strcmp(choice,"1")==0)
    strcpy (BusinessOwner.alert, "\x1b[37mwhite");
    if(strcmp(choice,"No")==0 || strcmp(choice,"2")==0)
    strcpy (BusinessOwner.alert, "\x1b[31mRed");
  
   // strcpy(plc1.alert,BusinessOwner.alert);
     fseek(businessowners,(lineb-1)*sizeof(struct user_b),SEEK_SET);
     fwrite(&BusinessOwner,sizeof(struct user_b),1,businessowners);
     fclose(businessowners);
    
    
    
      
  Bnsb_owner2 (lineb);
}

void place1 (int lineb)
{
    system ("clear");
    FILE *businessowners;
    businessowners = fopen("businessowners.txt","r");
    fseek(businessowners,(lineb-1)*sizeof(struct user_b),SEEK_SET);
    fread(&BusinessOwner,sizeof(struct user_b),1,businessowners);
    
printf
    ("\n\n\n\t\t\t\x1b[32m\xB2\xB2\xB2\xB2\xB2\x1b[33mYour state is under %s \x1b[33malert\x1b[32m\xB2\xB2\xB2\xB2\xB2",
     BusinessOwner.alert);
    fclose(businessowners);
     

    
  Bnsb_owner2 (lineb);
}
void suffering(int lineb)
{
  system("clear");
  char choice[20];
  FILE *businessowners;
  FILE *place;
  place = fopen("place.txt","r");
  businessowners = fopen("businessowners.txt","r");
  fseek(businessowners,(lineb-1)*sizeof(struct user_b),SEEK_SET);
  fread(& BusinessOwner,sizeof(struct user_b),1,businessowners);

  while(fread(&plc1,sizeof(struct visit_b),1,place))
  {
    if(strcmp(plc1.code,"\x1b[31msick")==0 && strcmp(plc1.place,BusinessOwner.place_b)==0)
    printf("\x1b[32m(sick people):\x1b[33m%s\n",plc1.name);
  }
  rewind(place);
  while(fread(&plc1,sizeof(struct visit_b),1,place))
  {
     if(strcmp(plc1.code,"\x1b[34mdangerouse")==0 && strcmp(plc1.place,BusinessOwner.place_b)==0)
    printf("\x1b[32m(dangerouse people):\x1b[33m%s\n",plc1.name);
  }
 rewind(place);
  while(fread(&plc1,sizeof(struct visit_b),1,place))
  {
     if(strcmp(plc1.code,"\x1b[33msuspected")==0 && strcmp(plc1.place,BusinessOwner.place_b)==0)
    printf("\x1b[32m(suspected people):\x1b[33m%s\n",plc1.name);
  }
  fclose(place);
  fclose(businessowners);
  printf("\n\t\t\x1b[32m1.\x1b[33mback\t\t\x1b[32m2.\x1b[33mexit\n\t\t\x1b[33mEnter your choice:");
        scanf("%s",choice);
        if(strcmp(choice,"back")==0 || strcmp(choice,"1")==0)
         Bnsb_owner2(lineb);
        if(strcmp(choice,"exit")==0 || strcmp(choice,"2")==0)
        close1();



}
void beatb()
{

}



void Admin ()
{
  system("clear");
  char choice[20];
  system ("clear");
  puts
    ("\n\n\n\t\t\t\x1b[33m\xB2\xB2\xB2\xB2\xB2 \x1b[32mWhat do you want to do?! \x1b[33m\xB2\xB2\xB2\xB2\xB2");
  puts
    ("\n\n\t\t\x1b[32m1.\x1b[33mEdit information\n\t\t\x1b[32m2.\x1b[33mEnter the hospital information \n\t\t\x1b[32m3.\x1b[33mCovid-19 statistics\n\t\t\x1b[32m4.\x1b[33mPeople recovered or dead from Covid-19\n\t\t\x1b[32m5.\x1b[33mAll users health condition\n\t\t\x1b[32m6.\x1b[33mpassed away users\n\t\t\x1b[32m7.\x1b[33mAll Business owners\n\t\t\x1b[32m8.\x1b[33mHospitals list\n\t\t\x1b[32m9.\x1b[33mexit\t\t\t\x1b[32m10.\x1b[33mback\n\n\n\n\n\t\t\x1b[32mEnter your choice:");
  scanf ("%s", choice);
  
    {
    if(strcmp(choice,"Edit information") == 0|| strcmp(choice,"1") == 0)
    editA();
    if(strcmp(choice,"Enter the hospital information") == 0 || strcmp(choice,"2") == 0)
    AddHospital();
    if(strcmp(choice,"Covid-19 statistics") == 0 || strcmp(choice,"3") == 0)
    statistics();
    if(strcmp(choice,"People recovered or dead from Covid-19")==0 || strcmp(choice,"4")==0)
    recovered_deads();
    if(strcmp(choice,"All users health condition")==0 || strcmp(choice,"5")==0)
    allNusers();
    if(strcmp(choice,"Passed aways")==0 || strcmp(choice,"6")==0)
    passed_away();
    if(strcmp(choice,"All Business owners")==0 || strcmp(choice,"7")==0)
    allBusers();
    if(strcmp(choice,"Hospitals list")==0 || strcmp(choice,"8")==0)
    allhospitals();
    if(strcmp(choice,"exit")==0 || strcmp(choice,"9")==0)
    close1();
    if(strcmp(choice,"back")==0 || strcmp(choice,"10")==0)
    menu();
    }
}
void editA()
{
   system("clear");
    FILE *admin;
    admin = fopen("admin.txt","r+");
    rewind(admin);
    fread(&modir,sizeof(struct user_a),1,admin);
    
   
    char choice[100];
    printf("\x1b[32m1.\x1b[33mName: \x1b[32m%s\n",modir.name);
    printf("\x1b[32m2.\x1b[33mLastname: \x1b[32m%s\n",modir.lastname);
    printf("\x1b[32m3.\x1b[33mCodemeli: \x1b[32m%s\n",modir.codemeli);
    printf("\x1b[32m4.\x1b[33mUsername: \x1b[32m%s\n",modir.username);
    printf("\x1b[32m5.\x1b[33mEmail: \x1b[32m%s\n",modir.email);
    printf("\x1b[32m6.\x1b[33mback\t\t\x1b[32m7.\x1b[33mexit\n");
    while(1){
    
    printf("\x1b[32mwhich feild would you like to edit?");
    scanf("%s",choice);
    if(strcmp(choice,"Name")==0 || strcmp(choice,"1")==0)
    {
      printf("\x1b[33mEnter your Name:");
      getchar ();
      fgets (modir.name, 20, stdin);
      modir.name[strlen(modir.name)-1]='\0';
    }
    if(strcmp(choice,"Lastname")==0 || strcmp(choice,"2")==0)
    {
      printf("\x1b[33mEnter your Lastname:");
      //getchar();
      fgets (modir.lastname, 20, stdin);
      modir.lastname[strlen(modir.lastname)-1]='\0';
    }
    if(strcmp(choice,"Codemeli")==0 || strcmp(choice,"3")==0)
    {
      printf("\x1b[33mEnter your Codemeli:");
      getchar ();
      fgets (modir.codemeli, 20, stdin);
      modir.codemeli[strlen(modir.codemeli)-1]='\0';
    }
    if(strcmp(choice,"Username")==0 || strcmp(choice,"4")==0)
    {
      printf("\x1b[33mEnter your Username:");
      getchar ();
      scanf("%s",modir.username);
      
      }
     
    
     if(strcmp(choice,"Email")==0 || strcmp(choice,"5")==0)
    {
      printf("\x1b[33mEnter your Email:");
      getchar ();
      fgets (modir.email, 20, stdin);
      modir.email[strlen(modir.email)-1]='\0';
      
    }
    
      if(strcmp(choice,"back")==0 || strcmp(choice,"6")==0)
      {
        rewind(admin);
        fwrite(&modir,sizeof(struct user_a),1,admin);
        fclose(admin);
        Admin();
        break;
      }

      if(strcmp(choice,"exit")==0 || strcmp(choice,"7")==0)
     {
       rewind(admin);
       fwrite(& modir,sizeof(struct user_a),1,admin);
       fclose(admin);
       close1();
       break;
     }
      
    }


}
void AddHospital()
{
  system("clear");
  FILE *hospitals;
    hospitals = fopen("hospitals.txt","a");
  char h[10];
  printf("\n\t\x1b[32menter hospital name:");
  scanf("%s",h);
  strcpy(hospital.name,h);
  printf("\n\t\x1b[32menter city name:");
  scanf("%s",h);
  strcpy(hospital.city,h);
  printf("\n\t\x1b[32menter region name:");
  scanf("%s",h);
   strcpy(hospital.region,h);
   fwrite(&hospital,sizeof(struct hospital),1,hospitals);
   fclose(hospitals);
    getchar();
   getchar();
   Admin();

}
void statistics()
{
  system("clear");
  FILE *normalusers;
 normalusers = fopen("normalusers.txt","r");
 while(fread(&NormalUser,sizeof(struct user_n),1,normalusers))
 {
   if(strcmp(NormalUser.condition,"\x1b[31msick") == 0)
   printf("\n\t\x1b[32mName: \x1b[33m%s \x1b[32m- \x1b[32mLastname: \x1b[33m%s \x1b[32m- \x1b[32mCodemeli: \x1b[33m%s\n",NormalUser.name_n,NormalUser.lastname_n,NormalUser.codemeli_n);
 }
 fclose(normalusers);
 getchar();
 getchar();
 Admin();
}
void recovered_deads()
{
  system("clear");
  FILE *normalusers;
  char rd[20];
  char yn[20];
  int found=0;
  normalusers = fopen("normalusers.txt","r+");
   printf("\x1b[32mEnter his/her codemeli");
  scanf("%s",rd);
  printf("\n\t\x1b[32mis  the patient dead?\n1.Yes\t2.No");
  scanf("%s",yn);
  if(strcmp(yn,"Yes")==0 || strcmp(yn,"1")==0)
  {
 
  while(fread(&NormalUser,sizeof(struct user_n),1,normalusers))
  {
    if(strcmp(NormalUser.codemeli_n,rd)==0)
    {
      found=1;
    NormalUser.dead=1;
    fseek(normalusers,-sizeof(struct user_n),SEEK_CUR);
    fwrite(&NormalUser,sizeof(struct user_n),1,normalusers);
    fclose(normalusers);
    getchar();
    Admin();

    }
  }
  if(found == 0)
  {
    char a[20];
    printf("\x1b[32mthere is No user whith this information!");
      printf("\n\x1b[33m1.\x1b[32mback\t\x1b[33m2.\x1b[32mexit");
    scanf("%s",a);
    if(strcmp(a,"back") == 0|| strcmp(a,"1") == 0)
    Admin();
    if(strcmp(a,"exit") == 0|| strcmp(a,"2") == 0)
    close1();
    }
  

}
else if(strcmp(yn,"No")==0||strcmp(yn,"2")==0)
{
  while(fread(&NormalUser,sizeof(struct user_n),1,normalusers))
  {
    if(strcmp(NormalUser.codemeli_n,rd)==0)
    {
      found=1;
    NormalUser.hr = 15;
    strcpy(NormalUser.condition,"\x1b[33msuspected");
    fseek(normalusers,-sizeof(struct user_n),SEEK_CUR);
    fwrite(&NormalUser,sizeof(struct user_n),1,normalusers);
    fclose(normalusers);
     getchar();
    Admin();
    }
  }
   if(found==0)
  {
    char a[20];
    printf("\t\x1b[32mthere is No user whith this information!");
      printf("\t\n\x1b[32m1.\x1b[33mback\t\x1b[32m2.\x1b[33mexit");
    scanf("%s",a);
    if(strcmp(a,"back")==0|| strcmp(a,"1")==0)
    Admin();
    if(strcmp(a,"exit")==0|| strcmp(a,"2")==0)
    close1();
    }
  

}
}
void allNusers()
{
  
  system("clear");
  FILE *normalusers;
  normalusers = fopen("normalusers.txt","r");
  while(fread(&NormalUser,sizeof(struct user_n),1,normalusers))
  {
    if(NormalUser.dead==0)
    printf("\t\x1b[32mname:\x1b[33m%s \x1b[32m- \x1b[32mlastname:\x1b[33m%s \x1b[32m- \x1b[32mcodemeli:\x1b[33m%s - \x1b[32mcondition:\x1b[33m%s\n",NormalUser.name_n,NormalUser.lastname_n,NormalUser.codemeli_n,NormalUser.condition);
  }
  fclose(normalusers);
  getchar();
  getchar();
  Admin();
}
void passed_away()
{
  system("clear");
  int found=0;
  FILE *normalusers;
  normalusers = fopen("normalusers.txt","r");
   while(fread(&NormalUser,sizeof(struct user_n),1,normalusers))
  {
    if(NormalUser.dead==1){
    found=1;
    printf("\t\x1b[32mname:\x1b[33m%s \x1b[32m- \x1b[32mlastname:\x1b[33m%s \x1b[32m- \x1b[32mcodemeli:\x1b[33m%s\n",NormalUser.name_n,NormalUser.lastname_n,NormalUser.codemeli_n);
    }
  }
  if(found==0)
  {
    printf("\n\t\x1b[35mno one's dead recently");
  }
  fclose(normalusers);
  getchar();
  getchar();
  Admin();

}
void allBusers()
{
  system("clear");
  FILE *businessowners;
  businessowners = fopen("businessowners.txt","r");
  while(fread(&BusinessOwner,sizeof(struct user_b),1,businessowners))
  {
  printf("\t\x1b[32mname:\x1b[33m%s \x1b[32m- \x1b[32mcodemeli: \x1b[33m%s \x1b[32m- \x1b[32mplace alert:\x1b[33m%s\n",BusinessOwner.name_b,BusinessOwner.codemeli_b,BusinessOwner.alert);
  }
  fclose(businessowners);
  getchar();
  getchar();
  Admin();

}
void allhospitals()
{
  system("clear");
  FILE *hospitals;
  hospitals = fopen("hospitals.txt","r");
  while(fread(&hospital,sizeof(struct hospital),1,hospitals))
  {
    printf("\t\x1b[32mhospital name:\x1b[33m%s \x1b[32m- \x1b[32mcity:\x1b[33m%s \x1b[32m- \x1b[32mregion:\x1b[33m%s\n",hospital.name,hospital.city,hospital.region);
  }
  fclose(hospitals);
  getchar();
  getchar();
  Admin();

}




int main ()
{
  
  FILE *admin;
  admin = fopen("admin.txt","r+");
  strcpy(modir.name,"modir");
  strcpy(modir.lastname,"modir");
  strcpy(modir.codemeli,"modir");
  strcpy(modir.username,"modir");
  strcpy(modir.password,"modir");
  strcpy(modir.email,"modir");
  fwrite(&modir,sizeof(struct user_a),1,admin);
  fclose(admin);
   start();



}








