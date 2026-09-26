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
extern int fn_8227AD00();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AC014;
extern unsigned int lbl_821CC160;


undefined4 *
fn_82365C38(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x1998);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar2 + 4;
    puVar2[1] = 1;
    *puVar2 = &lbl_821A8D8C;
    puVar2[2] = 1;
    if (puVar3 != (undefined4 *)0x0) {
      fn_8227AD00(puVar3,param_2,*param_3,*param_4,0xffffffff821abfe4,0,1,1);
      *(undefined2 *)(puVar2 + 0x466) = 0;
      puVar2[0x296] = 0;
      puVar2[0x2a5] = 0xf;
      uVar1 = lbl_821CC160;
      *puVar3 = &lbl_821AC014;
      puVar2[0x297] = uVar1;
    }
  }
  param_1[1] = puVar2;
  *param_1 = puVar2 + 4;
  return param_1;
}

