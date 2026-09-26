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
extern int fn_829AB0F0();
extern int fn_829AB128();


void fn_829AE100(ulonglong param_1,uint *param_2,uint param_3,uint param_4,char param_5,
                  byte param_6,undefined1 param_7,undefined1 param_8)

{
  char cVar1;
  byte bVar3;
  uint uVar2;
  undefined1 in_stack_00000057;
  
  if ((param_1 & 0xffffffff) == 0) {
    return;
  }
  if (param_2 != (uint *)0x0) {
    if ((1000000 < param_3) || (1000000 < param_4)) {
      fn_829AB0F0(param_1,0xffffffff82052398);
    }
    *param_2 = param_3;
    *(byte *)((int)param_2 + 0x19) = param_6;
    param_2[1] = param_4;
    *(char *)(param_2 + 6) = param_5;
    *(undefined1 *)((int)param_2 + 0x1a) = param_8;
    *(undefined1 *)((int)param_2 + 0x1b) = in_stack_00000057;
    *(undefined1 *)(param_2 + 7) = param_7;
    if ((param_6 == 3) || (cVar1 = '\x03', (param_6 & 2) == 0)) {
      cVar1 = '\x01';
    }
    *(char *)((int)param_2 + 0x1d) = cVar1;
    if ((param_6 & 4) != 0) {
      *(char *)((int)param_2 + 0x1d) = cVar1 + '\x01';
    }
    bVar3 = param_5 * *(char *)((int)param_2 + 0x1d);
    *(byte *)((int)param_2 + 0x1e) = bVar3;
    uVar2 = (int)(bVar3 + 7) >> 3;
    trapWord(6,(longlong)(int)uVar2,0);
    if (0x7fffffff / (ulonglong)uVar2 < (ulonglong)param_3) {
      fn_829AB128(param_1,0xffffffff82052358);
      uVar2 = 0;
    }
    else {
      uVar2 = bVar3 * param_3 + 7 >> 3;
    }
    param_2[3] = uVar2;
    return;
  }
  return;
}

