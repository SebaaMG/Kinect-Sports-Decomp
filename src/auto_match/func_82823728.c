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
extern int fn_82F63CA0();
extern int fn_82F68CC0();


undefined8 fn_82823728(int param_1,int *param_2,int param_3,uint *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (0 < *(int *)*param_2) {
    if ((ulonglong)(uint)param_2[9] < (ulonglong)(uint)param_2[10]) {
      puVar2 = (undefined1 *)(*(int *)*param_2 * 5 + param_1);
      uVar3 = (ulonglong)(uint)param_2[10] - (ulonglong)(uint)param_2[9];
      uVar1 = *(uint *)(puVar2 + -4);
      uVar4 = (ulonglong)uVar1;
      uVar5 = uVar3;
      if (uVar4 <= (uVar3 & 0xffffffff)) {
        uVar5 = uVar4;
      }
      if ((ulonglong)(uint)param_2[6] < (*param_4 + uVar5 + 5 & 0xffffffff)) {
        return 1;
      }
      *(int *)(puVar2 + -4) = (int)uVar5;
      puVar2[-5] = 1;
      if (param_3 != 0) {
        fn_82F63CA0((ulonglong)*(uint *)(*param_2 + 4) + (ulonglong)(uint)param_2[5] + uVar5);
      }
      fn_82F68CC0((ulonglong)*(uint *)(*param_2 + 4) + (ulonglong)(uint)param_2[5],
                   ((ulonglong)(uint)param_2[7] + (ulonglong)(uint)param_2[2]) - uVar4,uVar5);
      *(int *)(*param_2 + 4) = *(int *)(*param_2 + 4) + (int)uVar5;
      if ((uVar3 & 0xffffffff) < uVar4) {
        *puVar2 = 0;
        *(uint *)(puVar2 + 1) = uVar1 - (int)uVar3;
        *(int *)*param_2 = *(int *)*param_2 + 1;
        *param_4 = *param_4 + 5;
      }
      param_2[10] = param_2[9];
    }
  }
  return 0;
}

