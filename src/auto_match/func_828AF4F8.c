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
extern int fn_823AA970();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_828AF2B0();
extern int fn_828C8058();
extern int fn_828D8B60();
extern int fn_828D8FD8();


void fn_828AF4F8(int param_1)

{
  undefined4 uVar1;
  char cVar4;
  int iVar3;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    cVar4 = fn_8289DAD0();
    if (cVar4 == '\0') {
      cVar4 = fn_828AF2B0(param_1);
      if ((cVar4 == '\0') && (*(char *)(param_1 + 0xb2) == '\0')) {
        uVar1 = *(undefined4 *)(param_1 + 0x50);
        uVar2 = fn_823AA970(param_1);
        fn_828D8B60(uVar1,0,uVar2);
        *(undefined1 *)(param_1 + 0xb2) = 1;
      }
    }
    else {
      iVar3 = fn_8289D8D0(*(undefined4 *)(param_1 + 0x50));
      if (((iVar3 == 0) || (*(int *)(iVar3 + 4) != 1)) ||
         (cVar4 = fn_828D8FD8(*(undefined4 *)(iVar3 + 100),0), cVar4 == '\0')) {
        fn_828C8058(*(undefined4 *)(param_1 + 0x50),0xb);
        *(undefined1 *)(param_1 + 0xb0) = 1;
        return;
      }
    }
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  return;
}

