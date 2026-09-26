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
extern int fn_8275E678();
extern int fn_8275EB90();
extern int fn_8275FE18();
extern int fn_8275FFC0();
extern int fn_827603C0();
extern int fn_82F68CC0();
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


longlong fn_82760EC0(int param_1,uint *param_2)

{
  undefined8 uVar1;
  int iVar3;
  longlong lVar2;
  undefined4 *puVar4;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined1 auStack_50 [80];
  
  puVar4 = (undefined4 *)(param_1 + 0x54);
  fn_82F68CC0(param_2,puVar4,0x18);
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 != 0) {
    if (iVar3 == 2) {
      iVar3 = param_1 + 8;
      if (*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x24)) {
        if ((**(byte **)(param_1 + 0xc) & 7) == 0) {
          fn_827603C0(iVar3);
        }
        *puVar4 = 0;
        fn_8275FFC0(iVar3,param_1 + 0x60,param_1 + 100,param_1 + 0x68);
        uVar1 = fn_8275FE18(auStack_50,iVar3);
        fn_82F68CC0(param_1 + 0x2c,uVar1,0x28);
        *(float *)(param_1 + 0x58) =
             (float)(longlong)*(int *)(param_1 + 0x38) * *(float *)(param_1 + 0x50);
        *(float *)(param_1 + 0x5c) =
             (float)(longlong)*(int *)(param_1 + 0x3c) * *(float *)(param_1 + 0x50);
      }
      else {
        *puVar4 = 4;
      }
      goto LAB_8276105c;
    }
    if (iVar3 != 3) goto LAB_8276105c;
  }
  if (*(uint *)(param_1 + 0x30) < *(uint *)(param_1 + 0x34)) {
    fn_8275E678(param_1 + 0x2c,&uStack_70,0);
    *puVar4 = 3;
    *(undefined4 *)(param_1 + 0x58) = uStack_70;
    *(undefined4 *)(param_1 + 0x5c) = uStack_6c;
    *(undefined4 *)(param_1 + 0x60) = uStack_68;
    *(undefined4 *)(param_1 + 100) = uStack_64;
    *(undefined1 *)(param_1 + 0x68) = uStack_60;
  }
  else {
    *puVar4 = 2;
    if (*(uint *)(param_1 + 0x34) <= *(uint *)(param_1 + 0x30)) {
      iVar3 = *(int *)(param_1 + 0x48);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x4c);
      }
      *(int *)(param_1 + 0xc) = iVar3;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      fn_8275EB90();
    }
  }
LAB_8276105c:
  lVar2 = (ulonglong)*param_2 - 4;
  return lVar2 - (((ulonglong)*param_2 - 5) + (ulonglong)(lVar2 == 0));
}

