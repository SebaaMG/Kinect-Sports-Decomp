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
extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_822EFBF0();
extern int fn_823598B0();
extern int fn_82359928();
extern int fn_82396CA0();
extern int fn_823A75F0();
extern unsigned int iStack_1c;


void fn_823A5078(int param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  if (*(int *)(*(int *)(param_1 + 8) + 0x84) != 0) {
    puVar1 = (undefined4 *)fn_822EFBF0(auStack_20);
    fn_823A75F0(*puVar1);
    if (iStack_1c != 0) {
      fn_822315A0();
    }
  }
  fn_823598B0(*(undefined4 *)(param_1 + 8),0);
  fn_82359928(*(undefined4 *)(param_1 + 8),0);
  if (*(int *)(param_1 + 0x60) != 0) {
    fn_82396CA0(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}

