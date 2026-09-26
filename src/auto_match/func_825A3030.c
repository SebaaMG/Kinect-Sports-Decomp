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
extern int fn_82D85148();


void fn_825A3030(undefined8 param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(*(int *)(*param_2 + 0x14) + 0xe8);
  if ((cVar1 == '\x05') || (bVar2 = false, cVar1 == '\x04')) {
    bVar2 = true;
  }
  if (!bVar2) {
    *(undefined4 *)(*(int *)(*param_2 + 0x14) + 0x2c) = 2;
    fn_82D85148(*(undefined4 *)(*(int *)(*param_2 + 0x14) + 8),*(int *)(*param_2 + 0x14),0,1);
  }
  cVar1 = *(char *)(*(int *)(*param_2 + 0x18) + 0xe8);
  if ((cVar1 == '\x05') || (bVar2 = false, cVar1 == '\x04')) {
    bVar2 = true;
  }
  if (!bVar2) {
    *(undefined4 *)(*(int *)(*param_2 + 0x18) + 0x2c) = 2;
    fn_82D85148(*(undefined4 *)(*(int *)(*param_2 + 0x18) + 8),*(int *)(*param_2 + 0x18),0,1);
  }
  return;
}

