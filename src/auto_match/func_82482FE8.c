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
extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82281530();
extern int fn_82281868();
extern int fn_822819E0();
extern int fn_82480FA0();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();


void fn_82482FE8(int param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 0x58) == 1) {
    dVar5 = (double)*(float *)(param_1 + 0x104);
    pcVar1 = (char *)fn_8225F670();
    if (*pcVar1 != '\0') {
      iVar2 = fn_8225FDE0(0x6a,1);
      if ((iVar2 == 0) && (cVar3 = fn_82E1CAD0(0x6a), cVar3 != '\0')) {
        fn_82E1CC60(dVar5,0xffffffff821a7a04);
        fn_82E1CB08(0xffffffff821a7a38,0xffffffff821bd9c0,0);
        fn_82E1CCA8();
      }
    }
  }
  if (*(int *)(param_1 + 0x58) == 5) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  else if (*(int *)(param_1 + 0x58) == 1) {
    iVar2 = fn_82281530(*(undefined4 *)(param_1 + 0x14));
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      lVar4 = (ulonglong)*(uint *)(param_1 + 0x48) + 4;
      if (*(int *)(iVar2 + 0x10) == 0) {
        if (*(int *)(iVar2 + 8) != 0) {
          fn_822819E0(iVar2,lVar4);
        }
      }
      else {
        fn_82281868(iVar2,lVar4,0);
      }
      *(undefined4 *)(param_1 + 0x100) = 1;
    }
  }
  else {
    fn_82480FA0(param_1);
  }
  return;
}

