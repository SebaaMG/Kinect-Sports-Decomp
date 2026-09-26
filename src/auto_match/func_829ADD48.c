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
extern int fn_829AD2C8();
extern int fn_829AD470();
extern int fn_829AD7D0();
extern int fn_829ADAE0();
extern int fn_829ADD20();


void fn_829ADD48(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0xac);
  *(undefined4 **)(param_1 + 0x1bc) = puVar2;
  puVar2[1] = fn_829AD7D0;
  *puVar2 = fn_829ADD20;
  puVar2[0x18] = 0;
  puVar2[2] = fn_829ADAE0;
  puVar3 = puVar2 + 0x18;
  puVar2[7] = fn_829AD470;
  lVar4 = 0x10;
  do {
    puVar3[-0x10] = fn_829AD470;
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar2[8] = fn_829AD2C8;
  puVar2[0x16] = fn_829AD2C8;
  iVar1 = *(int *)(param_1 + 0x1bc);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0xa4) = 0;
  return;
}

