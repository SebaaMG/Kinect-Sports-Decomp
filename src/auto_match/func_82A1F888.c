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
extern unsigned int *auStack_38;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int lbl_83219B8C;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_40;


void fn_82A1F888(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 auStack_50 [2];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  
  RtlInitAnsiString(auStack_48,0xffffffff820892a4);
  uStack_30 = 0xfffffffd;
  puStack_2c = auStack_48;
  uStack_28 = 0x40;
  uStack_40 = 0x10000;
  if (param_2 == 0) {
    uVar2 = 0x120089;
  }
  else {
    uVar2 = 0x120116;
  }
  iVar1 = (**(code **)(lbl_83219B8C + 0xc))(auStack_50,uVar2,&uStack_30,auStack_38,&uStack_40,0,0,3)
  ;
  if (-1 < iVar1) {
    *param_1 = auStack_50[0];
  }
  return;
}

