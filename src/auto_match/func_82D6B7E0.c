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
extern unsigned int *auStack_70;
extern int fn_82CE6768();
extern unsigned int lbl_82134508;
extern unsigned int lbl_82138A4C;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


void fn_82D6B7E0(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,undefined4 param_5
                  )

{
  int iVar1;
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  int *piStack_74;
  undefined1 auStack_70 [112];
  
  iVar1 = *param_3;
  ppuStack_90 = &lbl_82138A4C;
  uStack_8c = lbl_82134508;
  uStack_88 = param_5;
  fn_82CE6768(auStack_70,param_3[2],iVar1 + 0x30);
  puStack_78 = auStack_70;
  uStack_80 = *(undefined4 *)(iVar1 + 0x14);
  uStack_7c = 0;
  piStack_74 = param_3;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x10))
            (*(int **)(param_1 + 0xc),&uStack_80,param_2,param_4,&ppuStack_90);
  return;
}

