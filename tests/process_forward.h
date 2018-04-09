#ifndef PROCESS_FORWARD_H
#define PROCESS_FORWARD_H


#include <gtest/gtest.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;
extern "C" {
#include "common.h"
}
void tester (string path1,string path2);


TEST(group1, test1) {
text txt = create_text();
shownum(txt,0);
SUCCEED();
}

TEST(group2, test1) {
    text txt = create_text();
   char* s_1 = new char[strlen(TESTER) + strlen("/test1") + 3];
    s_1[0]='\0';
   strcat(s_1, TESTER);
    strcat(s_1, "/test1");
   string s (s_1);
    //string s= TESTER+"/test1";
    load(txt,(char *)s.c_str());
    char* s_2 = new char[strlen(REZ) + strlen("/test1") + 3];\
     s_2[0]='\0';
    strcat(s_2, REZ);
    strcat(s_2, "/test1");
    string s1(s_2);
    shownum(txt,(char *)s1.c_str());
    //string path1,path2;
    char* s_3 = new char[strlen(ITG) + strlen("/test1") + 3];
    s_3[0]='\0';
    strcat(s_3, ITG);
    strcat(s_3, "/test1");
    string path1(s_3);
    char* s_4 = new char[strlen(REZ) + strlen("/test1") + 3];
      s_4[0]='\0';
    strcat(s_4, REZ);
    strcat(s_4, "/test1");
    string path2(s_4);

   // FILE *mf;
  //  mf = fopen("txt", "w");
   //  fprintf(mf, "%s", s_3);

     //fclose(mf);
    tester(path1,path2);
}
TEST(group2, test2) {
    text txt = create_text();
   char* s_1 = new char[strlen(TESTER) + strlen("/test2") + 3];
    s_1[0]='\0';
   strcat(s_1, TESTER);
    strcat(s_1, "/test2");
   string s (s_1);
    //string s= TESTER+"/test1";
    load(txt,(char *)s.c_str());
    char* s_2 = new char[strlen(REZ) + strlen("/test2") + 3];\
     s_2[0]='\0';
    strcat(s_2, REZ);
    strcat(s_2, "/test2");
    string s1(s_2);
    shownum(txt,(char *)s1.c_str());
    //string path1,path2;
    char* s_3 = new char[strlen(ITG) + strlen("/test2") + 3];
    s_3[0]='\0';
    strcat(s_3, ITG);
    strcat(s_3, "/test2");
    string path1(s_3);
    char* s_4 = new char[strlen(REZ) + strlen("/test2") + 3];
      s_4[0]='\0';
    strcat(s_4, REZ);
    strcat(s_4, "/test2");
    string path2(s_4);

   // FILE *mf;
  //  mf = fopen("txt", "w");
   //  fprintf(mf, "%s", s_3);

     //fclose(mf);
    tester(path1,path2);
}
TEST(group2, test3) {
    text txt = create_text();
   char* s_1 = new char[strlen(TESTER) + strlen("/test3") + 3];
    s_1[0]='\0';
   strcat(s_1, TESTER);
    strcat(s_1, "/test3");
   string s (s_1);
    //string s= TESTER+"/test1";
    load(txt,(char *)s.c_str());
    char* s_2 = new char[strlen(REZ) + strlen("/test3") + 3];\
     s_2[0]='\0';
    strcat(s_2, REZ);
    strcat(s_2, "/test3");
    string s1(s_2);
    shownum(txt,(char *)s1.c_str());
    //string path1,path2;
    char* s_3 = new char[strlen(ITG) + strlen("/test3") + 3];
    s_3[0]='\0';
    strcat(s_3, ITG);
    strcat(s_3, "/test3");
    string path1(s_3);
    char* s_4 = new char[strlen(REZ) + strlen("/test3") + 3];
      s_4[0]='\0';
    strcat(s_4, REZ);
    strcat(s_4, "/test3");
    string path2(s_4);

   // FILE *mf;
  //  mf = fopen("txt", "w");
   //  fprintf(mf, "%s", s_3);

     //fclose(mf);
    tester(path1,path2);
}

TEST(group2, test4) {
    text txt = create_text();
   char* s_1 = new char[strlen(TESTER) + strlen("/test4") + 3];
    s_1[0]='\0';
   strcat(s_1, TESTER);
    strcat(s_1, "/test4");
   string s (s_1);
    //string s= TESTER+"/test1";
    load(txt,(char *)s.c_str());
    char* s_2 = new char[strlen(REZ) + strlen("/test4") + 3];\
     s_2[0]='\0';
    strcat(s_2, REZ);
    strcat(s_2, "/test4");
    string s1(s_2);
    shownum(txt,(char *)s1.c_str());
    //string path1,path2;
    char* s_3 = new char[strlen(ITG) + strlen("/test4") + 3];
    s_3[0]='\0';
    strcat(s_3, ITG);
    strcat(s_3, "/test4");
    string path1(s_3);
    char* s_4 = new char[strlen(REZ) + strlen("/test4") + 3];
      s_4[0]='\0';
    strcat(s_4, REZ);
    strcat(s_4, "/test4");
    string path2(s_4);

   // FILE *mf;
  //  mf = fopen("txt", "w");
   //  fprintf(mf, "%s", s_3);

     //fclose(mf);
    tester(path1,path2);
}

//TEST(fibonachiTest, greather2) {
//    ASSERT_EQ(fibonachi(5), 5);
//    ASSERT_EQ(fibonachi(10), 55);
//}

//TEST(fibonachiTest, negative) {
//    ASSERT_EQ(fibonachi(-1), 0);
//}
void tester (string path1,string path2){

    ifstream f1,f2;
    f1.open(path1.c_str(),ios::binary);

    f2.open(path2.c_str(),ios::binary);

    if (!f2)
         FAIL();
//прочитать из F2
    if (!f1)
         FAIL();



    if(!f1 || !f2)
        //cerr<<"Неправильно указан путь"<<endl;
        FAIL();
    else
     {
    /* cout<<"Сравнение: "<<endl;
     cout<<"Номер\tФайл1\tФайл2"<<endl;
     cout<<"-----\t-----\t-----"<<endl;*/
     unsigned char b1,b2;
     bool p1,p2;
     int N=0;
     while(true)
      {
      p1= f1>>b1;
      p2= f2>>b2;

      if(!p1 && !p2) { /*cout<<"Сравнение закончено, файлы одинаковые"<<endl;*/
          SUCCEED();
          break;}
      if(!p1) {/*cout<<"Просмотр файла 1 закончился,файлы разной длины"<<endl;*/
          FAIL();

          break;}
      if(!p2) {/*cout<<"Просмотр файла 2 закончился,файлы разной длины"<<endl;*/
          FAIL();
          break;}

      //cout<<dec<<N<<"\t"<<hex<<(int)b1<<"\t"<<hex<<(int)b2<<endl;
      if(b1!=b2)
       {
       //cout<<"Найдено несовпадение в "<<N<<" байте"<<endl;
       break;
       }
      else N++;
      }
     }
}


#endif // PROCESS_FORWARD_H
