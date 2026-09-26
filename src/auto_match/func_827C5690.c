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
extern int fn_827C5308();
extern int fn_827C5390();
extern int fn_827C53D8();


void fn_827C5690(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  fn_827C5390();
  fn_827C53D8(param_1,(ulonglong)(uint)param_1[0xf] * 3 + 8);
  if ((0xffff < param_1[8]) || (0xffff < param_1[7])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x29;
    *(undefined4 *)(*param_1 + 0x18) = 0xffff;
    (**(code **)*param_1)(param_1);
  }
  fn_827C5308(param_1,param_1[0xe]);
  fn_827C53D8(param_1,param_1[8]);
  fn_827C53D8(param_1,param_1[7]);
  fn_827C5308(param_1,param_1[0xf]);
  iVar1 = 0;
  if (0 < param_1[0xf]) {
    puVar2 = (undefined4 *)(param_1[0x11] + -0x44);
    do {
      fn_827C5308(param_1,puVar2[0x11]);
      fn_827C5308(param_1,((ulonglong)(uint)puVar2[0x13] & 0xfffffff) * 0x10 +
                            (ulonglong)(uint)puVar2[0x14]);
      puVar2 = puVar2 + 0x15;
      fn_827C5308(param_1,*puVar2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0xf]);
  }
  return;
}

