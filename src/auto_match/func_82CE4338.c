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
extern unsigned int lbl_8323A960;
extern unsigned int lbl_8323A964;


void fn_82CE4338(int *param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  longlong lVar5;
  
  iVar2 = lbl_8323A960;
  if ((*(int *)(lbl_8323A960 + 8) == 0) ||
     (iVar3 = KeTlsGetValue(lbl_8323A964), iVar3 == 0x23df4554)) {
    if (0 < (int)param_2) {
      do {
        puVar1 = (undefined4 *)*param_1;
        if ((*(short *)(puVar1 + 1) != 0) &&
           (sVar4 = *(short *)((int)puVar1 + 6) + -1, *(short *)((int)puVar1 + 6) = sVar4,
           sVar4 == 0)) {
          (**(code **)*puVar1)(puVar1,1);
        }
        param_2 = param_2 + -1;
        param_1 = (int *)((int)param_1 + param_3);
      } while (param_2 != 0);
    }
  }
  else {
    iVar3 = KeTlsGetValue(lbl_8323A964);
    if (iVar3 == 0x23df4554) {
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
    }
    else {
      RtlEnterCriticalSection(iVar2 + 0x18);
      *(undefined4 *)(iVar2 + 0xc) = 1;
      KeTlsSetValue(lbl_8323A964,0x23df4554);
    }
    if (0 < (int)param_2) {
      do {
        puVar1 = (undefined4 *)*param_1;
        if ((*(short *)(puVar1 + 1) != 0) &&
           (sVar4 = *(short *)((int)puVar1 + 6) + -1, *(short *)((int)puVar1 + 6) = sVar4,
           sVar4 == 0)) {
          (**(code **)*puVar1)(puVar1,1);
        }
        param_2 = param_2 + -1;
        param_1 = (int *)((int)param_1 + param_3);
      } while (param_2 != 0);
    }
    lVar5 = (ulonglong)*(uint *)(iVar2 + 0xc) - 1;
    *(int *)(iVar2 + 0xc) = (int)lVar5;
    if (lVar5 < 1) {
      KeTlsSetValue(lbl_8323A964,0);
      RtlLeaveCriticalSection(iVar2 + 0x18);
    }
  }
  return;
}

