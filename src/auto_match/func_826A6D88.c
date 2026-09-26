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
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_826972E0();


void fn_826A6D88(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x1c) < 1) {
    puVar4 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar4);
    puVar4[4] = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = fn_826957D0(param_1,0);
    uVar5 = fn_826972E0(uVar2,uVar1);
    if (((uVar5 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (uVar3 = 1, (uVar5 & 0xfffffffffffff) == 0)) {
      uVar3 = 0;
    }
    puVar4 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar4);
    puVar4[4] = uVar3;
  }
  *puVar4 = 2;
  return;
}

