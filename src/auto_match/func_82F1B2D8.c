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
extern int fn_82F2A8A8();
extern unsigned int uStack_40;


longlong fn_82F1B2D8(int param_1,undefined2 *param_2,short *param_3,int param_4)

{
  short sVar1;
  longlong lVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uStack_40;
  undefined4 auStack_3c [15];
  
  sVar1 = *param_3;
  lVar5 = 0;
  auStack_3c[0] = 0;
  uStack_40 = 0;
  if (param_4 < 4) {
    if (2 < sVar1) {
      iVar4 = 2;
      puVar3 = param_2;
      if (2 < sVar1 + -2) {
        do {
          lVar2 = fn_82F2A8A8(param_1,puVar3[3],puVar3[2],
                               *(undefined4 *)((*(int *)(param_1 + 0x4e48) + 0x138b) * 4 + param_1),
                               auStack_3c,&uStack_40);
          iVar4 = iVar4 + 2;
          lVar5 = lVar2 + lVar5;
          puVar3 = puVar3 + 2;
        } while (iVar4 < *param_3 + -2);
      }
      lVar2 = fn_82F2A8A8(param_1,(param_2 + iVar4)[1],param_2[iVar4],
                           *(undefined4 *)((*(int *)(param_1 + 0x4e48) + 0x138e) * 4 + param_1),
                           auStack_3c,&uStack_40);
      return lVar2 + lVar5;
    }
  }
  else if (2 < sVar1) {
    iVar4 = 2;
    puVar3 = param_2;
    if (2 < sVar1 + -2) {
      do {
        lVar2 = fn_82F2A8A8(param_1,puVar3[3],puVar3[2],
                             *(undefined4 *)((*(int *)(param_1 + 0x4e44) + 0x1385) * 4 + param_1),
                             auStack_3c,&uStack_40);
        iVar4 = iVar4 + 2;
        lVar5 = lVar2 + lVar5;
        puVar3 = puVar3 + 2;
      } while (iVar4 < *param_3 + -2);
    }
    lVar2 = fn_82F2A8A8(param_1,(param_2 + iVar4)[1],param_2[iVar4],
                         *(undefined4 *)((*(int *)(param_1 + 0x4e44) + 5000) * 4 + param_1),
                         auStack_3c,&uStack_40);
    return lVar2 + lVar5;
  }
  return 0;
}

