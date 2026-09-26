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
extern int fn_82E741E0();


undefined8 fn_82E74680(int *param_1,ulonglong *param_2,undefined4 *param_3)

{
  int iVar2;
  undefined8 uVar1;
  ulonglong *puVar3;
  ulonglong *apuStack_30 [12];
  
  iVar2 = fn_82E741E0(param_1 + 4,apuStack_30);
  if (iVar2 < 0) {
    uVar1 = 0;
  }
  else {
    *apuStack_30[0] = *param_2;
    *(undefined4 *)(apuStack_30[0] + 1) = *param_3;
    *(undefined4 *)((int)apuStack_30[0] + 0xc) = 0;
    *(undefined4 *)(apuStack_30[0] + 2) = 0;
    puVar3 = (ulonglong *)*param_1;
    if (puVar3 == (ulonglong *)0x0) {
      *param_1 = (int)apuStack_30[0];
    }
    else {
      do {
        if (*param_2 <= *puVar3) {
          *(ulonglong **)((int)apuStack_30[0] + 0xc) = puVar3;
          *(undefined4 *)(apuStack_30[0] + 2) = *(undefined4 *)(puVar3 + 2);
          if (*(int *)(puVar3 + 2) != 0) {
            *(ulonglong **)(*(int *)(puVar3 + 2) + 0xc) = apuStack_30[0];
          }
          *(ulonglong **)(puVar3 + 2) = apuStack_30[0];
          if (puVar3 == (ulonglong *)*param_1) {
            *param_1 = (int)apuStack_30[0];
          }
          goto LAB_82e74718;
        }
        puVar3 = *(ulonglong **)((int)puVar3 + 0xc);
      } while (puVar3 != (ulonglong *)0x0);
      *(int *)(apuStack_30[0] + 2) = param_1[1];
      *(ulonglong **)(param_1[1] + 0xc) = apuStack_30[0];
    }
    param_1[1] = (int)apuStack_30[0];
LAB_82e74718:
    uVar1 = 1;
    param_1[3] = param_1[3] + 1;
  }
  return uVar1;
}

