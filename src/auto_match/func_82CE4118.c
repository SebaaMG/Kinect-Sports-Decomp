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


void fn_82CE4118(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = lbl_8323A960;
  if (*(short *)(param_1 + 1) != 0) {
    if (*(short *)((int)param_1 + 6) == 1) {
      *(undefined2 *)((int)param_1 + 6) = 0;
      (**(code **)*param_1)(param_1,1);
    }
    else if ((*(int *)(lbl_8323A960 + 8) == 1) &&
            (iVar2 = KeTlsGetValue(lbl_8323A964), iVar2 != 0x23df4554)) {
      iVar2 = KeTlsGetValue(lbl_8323A964);
      if (iVar2 == 0x23df4554) {
        *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      }
      else {
        RtlEnterCriticalSection(iVar1 + 0x18);
        *(undefined4 *)(iVar1 + 0xc) = 1;
        KeTlsSetValue(lbl_8323A964,0x23df4554);
      }
      *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1;
      lVar3 = (ulonglong)*(uint *)(iVar1 + 0xc) - 1;
      *(int *)(iVar1 + 0xc) = (int)lVar3;
      if (lVar3 < 1) {
        KeTlsSetValue(lbl_8323A964,0);
        RtlLeaveCriticalSection(iVar1 + 0x18);
      }
    }
    else {
      *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1;
    }
  }
  return;
}

