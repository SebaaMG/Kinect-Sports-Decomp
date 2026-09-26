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
extern unsigned int *auStack_a0;
extern int fn_82CE8A48();
extern int fn_82CFC050();


void fn_82CE8B30(int param_1,int param_2,undefined8 param_3)

{
  undefined1 auStack_a0 [136];
  
  fn_82CFC050(auStack_a0,param_2,*(undefined2 *)(param_2 + 4));
  RtlEnterCriticalSection(param_1);
  fn_82CE8A48(param_1,*(undefined4 *)(param_1 + 0x1c),auStack_a0,param_3);
  RtlLeaveCriticalSection(param_1);
  return;
}

