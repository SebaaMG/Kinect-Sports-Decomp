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
extern unsigned int *auStack_40;
extern int fn_82EDD518();
extern int fn_82F68CC0();


void fn_82ED5C68(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [60];
  
  if ((((*(int *)(param_1 + 0x4b00) != 0) && ((param_2 & 0xffffffff) != 0)) &&
      ((param_3 & 0xffffffff) != 0)) &&
     (((param_4 & 0xffffffff) != 0 && ((param_5 & 0xffffffff) != 0)))) {
    lVar1 = (longlong)*(int *)(param_1 + 0x550) * (longlong)*(int *)(param_1 + 0x548);
    lVar2 = (longlong)*(int *)(param_1 + 0x55c) * (longlong)*(int *)(param_1 + 0x554);
    fn_82F68CC0(*(undefined4 *)(param_1 + 0x4b08),param_2,lVar1);
    fn_82F68CC0((ulonglong)*(uint *)(param_1 + 0x4b08) + lVar1,param_3,lVar2);
    fn_82F68CC0((ulonglong)*(uint *)(param_1 + 0x4b08) + lVar2 + lVar1,param_4,lVar2);
    fn_82EDD518(*(undefined4 *)(param_1 + 0x4b00),*(undefined4 *)(param_1 + 0x4b08),
                      *(undefined4 *)(param_1 + 0x4ac0),auStack_3c,param_5,
                      *(undefined4 *)(param_1 + 0x4ae8),auStack_40,*(int *)(param_1 + 0x6f4c) != 0);
  }
  return;
}

