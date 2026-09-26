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
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern int fn_8305D7D0();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_8305F258();
extern int fn_8305F2E8();
extern int fn_83061508();
extern int fn_83061F30();
extern int fn_830641D8();
extern int fn_83065E70();


void fn_83064788(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [128];
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (((param_3 & 0xffffffff) == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
      iVar1 = fn_83065E70();
      *(int *)(param_1 + 0x2c) = iVar1;
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      fn_8305D7D0(param_2,(ulonglong)*(uint *)(param_1 + 0x2c) + 0x10);
    }
    else {
      fn_83061508(auStack_b0);
      fn_8305F2E8(auStack_80);
      fn_8305E0F8(auStack_80,auStack_b0);
      fn_8305EC98(auStack_80,param_2);
      if ((param_3 & 0xffffffff) == 0) {
        param_3 = (ulonglong)*(uint *)(param_1 + 0x2c);
      }
      fn_830641D8(param_1,param_3,auStack_80,param_4,param_5);
      fn_8305F258(auStack_80);
      fn_83061F30(auStack_b0);
    }
  }
  return;
}

