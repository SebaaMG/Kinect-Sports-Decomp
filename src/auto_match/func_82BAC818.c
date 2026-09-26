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
extern int fn_82AB1538();
extern int fn_82BC0088();
extern unsigned int lbl_820E2FE8;


void fn_82BAC818(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  fn_82AB1538(uVar1,1,0xd,0);
  fn_82AB1538(uVar1,0xe,3,0);
  fn_82AB1538(uVar1,0x11,5,param_2);
  fn_82AB1538(uVar1,0x16,0x16,0);
  fn_82AB1538(uVar1,0x2c,1,0);
  fn_82AB1538(uVar1,0x2d,4,lbl_820E2FE8);
  puVar3 = (undefined4 *)
           fn_82BC0088(*(int *)(param_1 + 0x70),*(undefined4 *)(*(int *)(param_1 + 0x70) + 4))
  ;
  *puVar3 = uVar1;
  iVar2 = *(int *)(param_1 + 0x38);
  piVar4 = (int *)fn_82BC0088(*(int *)(param_1 + 0x74),
                                    *(undefined4 *)(*(int *)(param_1 + 0x74) + 4));
  *piVar4 = iVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 6;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}

