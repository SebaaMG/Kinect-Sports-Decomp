typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_44;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C1730();
extern int fn_822C18B8();
extern int fn_822CD140();
extern int fn_82535298();
extern int fn_825354B8();
extern int fn_82536288();
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82379958(int *param_1,int *param_2)

{
  bool bVar1;
  int aiStack_90 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [28];
  undefined1 auStack_44 [68];
  
  if (param_2 == (int *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 != 0;
  }
  if (bVar1) {
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    fn_82230110(auStack_60,0xffffffff821acd0c);
    fn_82230110(auStack_44,0xffffffff821acd04);
    fn_822C1730(&uStack_80,auStack_60);
    fn_82230300(auStack_44,1,0);
    fn_82230300(auStack_60,1,0);
    aiStack_90[0] = *param_2;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    if (param_1 + 8 == (int *)0x0) {
      aiStack_90[0] =
           fn_82535298(aiStack_90,*(undefined4 *)(*(int *)(*param_1 + 0x4c) + 0x84c),
                             &uStack_70,&uStack_80);
    }
    else {
      aiStack_90[0] =
           fn_825354B8(aiStack_90,param_1 + 8,0,
                             *(undefined4 *)(*(int *)(*param_1 + 0x4c) + 0x84c),&uStack_70,
                             &uStack_80);
    }
    fn_82536288(aiStack_90);
    fn_822CD140(&uStack_70);
    fn_822C18B8(&uStack_80);
  }
  return;
}

