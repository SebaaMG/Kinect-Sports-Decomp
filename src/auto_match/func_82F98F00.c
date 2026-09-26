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
extern int fn_82F655D8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82015618;
extern unsigned int lbl_821AAD20;


undefined8 fn_82F98F00(int *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  
  iVar2 = lbl_821AAD20;
  iVar1 = lbl_82002C5C;
  if ((param_4 & 0xffffffff) == 0) {
    param_1[1] = lbl_82002C5C;
    param_1[2] = iVar2;
    param_1[3] = iVar1;
    dVar4 = (double)fn_82F655D8(lbl_82015618,lbl_82005710);
    param_1[4] = (int)(float)dVar4;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 0x15) = 1;
    return 1;
  }
  uVar3 = (**(code **)(*param_1 + 0x14))(param_1,param_3,param_4);
  return uVar3;
}

