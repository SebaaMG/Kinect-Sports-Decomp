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
extern unsigned int *auStack_3c;
extern int fn_82CB9388();
extern int fn_82CB9450();
extern int fn_82CBA440();
extern unsigned int uStack_40;


void fn_82C93890(int param_1,int param_2,ulonglong param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  uint uStack_40;
  uint auStack_3c [15];
  
  uVar1 = *(undefined4 *)(param_1 + 0x1cc);
  iVar2 = (*(int *)(param_1 + 0x88) * param_5 * 2 + param_4) * 2;
  if (*(short *)(*(int *)(param_1 + 0x6f0) + iVar2) == 0x4000) {
    iVar2 = 0;
    do {
      lVar4 = 8;
      puVar3 = (undefined1 *)(*(int *)(param_1 + 0xcc) * iVar2 + param_2 + -1);
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = 0x80;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
  }
  else {
    auStack_3c[0] = (uint)*(short *)(*(int *)(param_1 + 0x6f0) + iVar2);
    uStack_40 = (uint)*(short *)(*(int *)(param_1 + 0x6f4) + iVar2);
    if (*(int *)(param_1 + 0x3cb0) == 7) {
      fn_82CB9450();
    }
    else {
      fn_82CB9388(param_1,auStack_3c,&uStack_40,param_4 >> 1,param_5 >> 1);
    }
    iVar2 = *(int *)(param_1 + 0xcc);
    fn_82CBA440(param_1,(((int)uStack_40 >> 2) + param_5 * 8) * iVar2 +
                              *(int *)(param_1 + 0xee4) + ((int)auStack_3c[0] >> 2) + param_4 * 8,
                      iVar2,param_2,iVar2,auStack_3c[0] & 3,uStack_40 & 3,uVar1);
  }
  if ((param_3 & 0xffffffff) != 0) {
    (**(code **)(param_1 + 0xc70))
              (param_2,param_2,param_3,*(undefined4 *)(param_1 + 0xcc),
               *(undefined4 *)(param_1 + 0x108));
  }
  return;
}

