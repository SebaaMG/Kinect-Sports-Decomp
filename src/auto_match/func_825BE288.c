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
extern int fn_822315A0();
extern int fn_8251FA58();
extern int fn_8265CA20();
extern int fn_827D5070();
extern int fn_827D50B8();


void fn_825BE288(int *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*param_1 != 0) && (iVar3 = fn_827D50B8(), iVar3 == 0)) {
    RtlEnterCriticalSection((ulonglong)*param_2 + 0x234);
    uVar2 = *param_2;
    bVar1 = param_2[3] == *(uint *)(uVar2 + 0x230);
    if (bVar1) {
      uVar4 = fn_827D5070(*param_1);
      *(undefined4 *)(param_2[2] * 4 + *(int *)(uVar2 + 0x1e4)) = uVar4;
    }
    RtlLeaveCriticalSection((ulonglong)*param_2 + 0x234);
    if (!bVar1) {
      fn_827D5070(*param_1);
      fn_8251FA58();
    }
  }
  if (param_2 != (uint *)0x0) {
    if (param_2[1] != 0) {
      fn_822315A0();
    }
    fn_8265CA20(param_2);
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

