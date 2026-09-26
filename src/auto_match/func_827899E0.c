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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82789468();
extern unsigned int iStack_34;
extern unsigned int iStack_38;


ulonglong fn_827899E0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iStack_38;
  int iStack_34;
  
  piVar4 = (int *)(*(int *)(((uint)((ulonglong)param_2 >> 8) & 0xfffffc) + *(int *)(param_1 + 0x1c))
                  + ((uint)param_2 & 0x3ff) * 0xc);
  iVar1 = piVar4[1];
  iVar2 = *piVar4;
  iStack_38 = iVar1;
  iStack_34 = iVar2;
  uVar3 = fn_82789468((int *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x34),&iStack_38,
                        CONCAT44(param_1,param_1 + 0x10));
  if (((uVar3 < *(uint *)(param_1 + 0x34)) &&
      (uVar3 = *(uint *)(uVar3 * 4 + *(int *)(param_1 + 0x30)),
      piVar4 = (int *)(*(int *)((uVar3 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x1c)) +
                      (uVar3 & 0x3ff) * 0xc), *piVar4 == iVar1)) && (piVar4[1] == iVar2)) {
    return (ulonglong)(uint)piVar4[2];
  }
  return 0xffffffffffffffff;
}

