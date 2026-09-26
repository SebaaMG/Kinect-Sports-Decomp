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
extern unsigned int *auStack_140;
extern int fn_82648AD8();
extern unsigned int uStack_e8;


undefined8 fn_82678390(int param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_140 [88];
  uint uStack_e8;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = 0;
    *param_2 = *param_2 | 0x40000;
  }
  else {
    param_2[2] = 0x36b;
    *param_2 = 0x8f30c;
    param_2[1] = 0x1b;
    if ((*(uint *)(param_1 + 0x24) & 2) != 0) {
      *param_2 = 0xcf30c;
    }
    fn_82648AD8(*(undefined4 *)(param_1 + 0xd8),auStack_140);
    uVar1 = 1;
    param_2[3] = uStack_e8;
  }
  return uVar1;
}

