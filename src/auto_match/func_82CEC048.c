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
extern unsigned int *auStack_50;
extern int fn_82CEBF80();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


bool fn_82CEC048(undefined4 *param_1)

{
  char *pcVar1;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_40 = *param_1;
  uStack_2c = param_1[5];
  uStack_18 = param_1[10];
  uStack_3c = param_1[4];
  uStack_30 = param_1[1];
  uStack_38 = param_1[8];
  uStack_20 = param_1[2];
  uStack_28 = param_1[9];
  uStack_1c = param_1[6];
  uStack_34 = lbl_821AAD20;
  uStack_24 = lbl_821AAD20;
  uStack_14 = lbl_821AAD20;
  pcVar1 = (char *)fn_82CEBF80(auStack_50,param_1,&uStack_40);
  return *pcVar1 != '\0';
}

