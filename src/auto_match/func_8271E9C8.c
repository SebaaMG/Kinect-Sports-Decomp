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
extern int fn_8267C498();
extern int fn_82681838();
extern int fn_826959C8();
extern int fn_8269F500();
extern int fn_826A7398();
extern int fn_82711FA8();


void fn_8271E9C8(int param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int aiStack_20 [2];
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = fn_826A7398();
    fn_82711FA8(aiStack_20,uVar2);
    if (aiStack_20[0] != 0) {
      uVar3 = (ulonglong)*(uint *)(aiStack_20[0] + 0x80);
      if (*(uint *)(aiStack_20[0] + 0x80) == 0) {
        uVar3 = fn_8269F500(aiStack_20[0]);
      }
      fn_82681838(*(undefined4 *)(param_1 + 4),uVar3 + 0xc);
      fn_8267C498(aiStack_20[0]);
    }
  }
  return;
}

