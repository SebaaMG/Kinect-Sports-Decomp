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
extern int fn_82E2DD28();


undefined8 fn_82E2E920(undefined4 *param_1,ushort *param_2,undefined4 *param_3)

{
  int iVar2;
  undefined8 uVar1;
  ushort *puVar3;
  ushort *apuStack_30 [12];
  
  iVar2 = fn_82E2DD28(param_1 + 4,apuStack_30);
  if (iVar2 < 0) {
    uVar1 = 0;
  }
  else {
    *apuStack_30[0] = *param_2;
    *(undefined4 *)(apuStack_30[0] + 2) = *param_3;
    apuStack_30[0][4] = 0;
    apuStack_30[0][5] = 0;
    apuStack_30[0][6] = 0;
    apuStack_30[0][7] = 0;
    puVar3 = (ushort *)*param_1;
    if (puVar3 == (ushort *)0x0) {
      *param_1 = apuStack_30[0];
    }
    else {
      do {
        if (*param_2 < *puVar3) {
          *(ushort **)(apuStack_30[0] + 4) = puVar3;
          *(undefined4 *)(apuStack_30[0] + 6) = *(undefined4 *)(puVar3 + 6);
          if (*(int *)(puVar3 + 6) != 0) {
            *(ushort **)(*(int *)(puVar3 + 6) + 8) = apuStack_30[0];
          }
          *(ushort **)(puVar3 + 6) = apuStack_30[0];
          if (puVar3 == (ushort *)*param_1) {
            *param_1 = apuStack_30[0];
          }
          goto LAB_82e2e9b8;
        }
        puVar3 = *(ushort **)(puVar3 + 4);
      } while (puVar3 != (ushort *)0x0);
      *(undefined4 *)(apuStack_30[0] + 6) = param_1[1];
      *(ushort **)(param_1[1] + 8) = apuStack_30[0];
    }
    param_1[1] = apuStack_30[0];
LAB_82e2e9b8:
    uVar1 = 1;
    param_1[3] = param_1[3] + 1;
  }
  return uVar1;
}

