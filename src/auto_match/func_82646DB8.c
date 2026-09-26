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
extern int fn_82637398();
extern int fn_82643B08();
extern int fn_82645110();
extern int fn_8264F1D8();


undefined8 fn_82646DB8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x2abd) = *(byte *)(param_1 + 0x2abd) & 0x7f;
  fn_82645110();
  puVar1 = *(undefined4 **)(param_1 + 0x350c);
  if (*(undefined4 **)(param_1 + 0x3510) < puVar1 + 1) {
    puVar1 = (undefined4 *)fn_82643B08(param_1 + 0x3500);
  }
  *puVar1 = 0x85000000;
  *(undefined4 **)(param_1 + 0x350c) = puVar1 + 1;
  if ((*(byte *)(param_1 + 0x2abc) & 0x20) == 0) {
    iVar2 = fn_8264F1D8(param_1,0x1000000 << (*(uint *)(param_1 + 0x2c3c) & 0x3f));
    if (iVar2 != 0) {
      fn_82637398(param_1,0);
      return 0xffffffff8007000e;
    }
    if ((*(byte *)(param_1 + 0x2abd) & 0x40) == 0) {
      fn_82637398(param_1,0);
    }
  }
  return 0;
}

