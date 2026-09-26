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
extern unsigned int *auStack_18;
extern int fn_82FB2590();
extern int fn_82FB4BA8();
extern int fn_82FB5408();
extern int fn_82FB5820();
extern unsigned int uStack_20;


undefined4 fn_82FB5D80(int param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uStack_20;
  int *piStack_1c;
  undefined4 auStack_18 [2];
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  fn_82FB2590(*(undefined4 *)(param_1 + 0x44),param_2,&uStack_20);
  if ((*(char *)(*(int *)(param_1 + 0x44) + 0xd0) == '\0') ||
     (cVar1 = fn_82FB4BA8(param_1,uStack_20), cVar1 != '\0')) {
    piStack_1c = (int *)fn_82FB5408(param_1,uStack_20,auStack_18);
    if (piStack_1c != (int *)0x0) {
      fn_82FB5820(param_1,uStack_20,auStack_18,&piStack_1c);
      if (piStack_1c != (int *)0x0) {
        (**(code **)(*piStack_1c + 4))();
        return auStack_18[0];
      }
    }
  }
  return 0;
}

