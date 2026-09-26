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
extern int fn_83037648();
extern int fn_83037D58();
extern unsigned int uStack_4e;
extern unsigned int uStack_50;


undefined8 fn_830132A0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  
  bVar2 = false;
  RtlEnterCriticalSection(param_1 + 4);
  if (((*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x38)) ||
      (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x3c))) ||
     (bVar1 = true, *(char *)(param_1 + 0x40) != '\0')) {
    bVar1 = false;
  }
  if (!bVar1) {
    uStack_4e = 0;
    uStack_50 = 4;
    iVar3 = fn_83037D58(param_1 + 0x20,&uStack_50,4);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x44) = 1;
    }
    bVar2 = true;
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  }
  RtlLeaveCriticalSection(param_1 + 4);
  if (bVar2) {
    fn_83037648(param_1 + 0x9c);
  }
  return 1;
}

