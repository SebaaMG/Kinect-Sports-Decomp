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
extern int fn_82687270();
extern int fn_826A8E58();
extern int fn_82766D88();
extern int fn_82768DE0();
extern int fn_82768F38();
extern unsigned int iStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82687628(int param_1)

{
  char cVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  
  RtlEnterCriticalSection(param_1 + 0xc);
  if ((ulonglong)*(uint *)(param_1 + 8) != 0) {
    fn_82768DE0(&piStack_28,(ulonglong)*(uint *)(param_1 + 8) + 0xc);
    uStack_30 = 0;
    uStack_2c = 0;
    cVar1 = fn_826A8E58(&piStack_28,&uStack_30);
    if (cVar1 == '\0') {
      uStack_30 = 0;
      uStack_2c = 0;
      do {
        fn_82687270(*(undefined4 *)(iStack_24 * 8 + *piStack_28 + 0xc));
        fn_82766D88(&piStack_28);
        cVar1 = fn_826A8E58(&piStack_28,&uStack_30);
      } while (cVar1 == '\0');
    }
    fn_82768F38((ulonglong)*(uint *)(param_1 + 8) + 0xc);
  }
  RtlLeaveCriticalSection(param_1 + 0xc);
  return;
}

