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
#define CONCAT13(h,l) ((U32)((((U8)(h)) << 24) | ((U32)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_b0;
extern int fn_82CF84B0();
extern int fn_82D00D50();
extern int fn_82D00E00();
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


undefined8 fn_82CF7F50(int param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 uStack_c0;
  uint uStack_b8;
  undefined1 auStack_b0 [176];
  
  RtlEnterCriticalSection(param_1 + 0x18);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 4))(*(int **)(param_1 + 0x34),param_3);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 0x2c))(*(int **)(param_1 + 0x34),uVar1,param_3);
  *(int *)(param_1 + 0x48) = iVar3 + *(int *)(param_1 + 0x48);
  uStack_b8 = CONCAT13('\x01' - (param_2 == 0),(((U64)(uStack_b8) >> 8) & 0xFFFFFF));
  if (*(int *)(param_1 + 4) == 0) {
    uStack_c0 = 0;
  }
  else {
    uVar2 = fn_82D00D50(*(int *)(param_1 + 4),auStack_b0,0x20);
    uStack_c0 = fn_82D00E00(param_1 + 8,auStack_b0,uVar2);
  }
  fn_82CF84B0(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x38),uVar1,
                  CONCAT44(uStack_c0,(int)param_3),(ulonglong)uStack_b8 << 0x20);
  RtlLeaveCriticalSection(param_1 + 0x18);
  return uVar1;
}

