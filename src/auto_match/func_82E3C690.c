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


undefined8 fn_82E3C690(int *param_1,int *param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((*param_1 != 0) && (*param_2 != 0)) {
    puVar4 = (uint *)(*param_2 + -4);
    puVar3 = param_3 + -1;
    lVar6 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *param_4 = *(undefined4 *)(*param_2 + 0x14);
    param_2[1] = *param_2;
    iVar1 = *(int *)(*param_2 + 0x18);
    *param_2 = iVar1;
    if (iVar1 == 0) {
      uVar2 = (ulonglong)((uint)param_1[1] >> 1);
      trapWord(6,uVar2,0);
      uVar5 = (((ulonglong)*(ushort *)(param_3 + 4) ^ (ulonglong)*param_3) -
              (longlong)(int)(((ulonglong)*(ushort *)(param_3 + 4) ^ (ulonglong)*param_3) / uVar2) *
              (longlong)(int)((uint)param_1[1] >> 1)) + 1;
      if ((uVar5 & 0xffffffff) < uVar2) {
        lVar6 = (uVar5 & 0x3fffffff) << 2;
        do {
          if (*(int *)((int)lVar6 + *param_1) != 0) {
            param_2[1] = 0;
            *param_2 = *(int *)((int)((uVar5 & 0xffffffff) << 2) + *param_1);
            return 1;
          }
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 4;
        } while ((uVar5 & 0xffffffff) < uVar2);
      }
    }
    return 1;
  }
  return 0;
}

