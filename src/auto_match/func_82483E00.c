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


void fn_82483E00(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  double dVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x58) == 1) {
    dVar6 = (double)*(float *)(iVar1 + 0x104);
    pcVar2 = (char *)fn_8225F670();
    if (*pcVar2 != '\0') {
      iVar3 = fn_8225FDE0(0x6a,1);
      if ((iVar3 == 0) && (cVar4 = fn_82E1CAD0(0x6a), cVar4 != '\0')) {
        fn_82E1CC60(dVar6,0xffffffff821a7a04);
        fn_82E1CB08(0xffffffff821a7a38,0xffffffff821bd9c0,0);
        fn_82E1CCA8();
      }
    }
  }
  if (*(int *)(iVar1 + 0x58) == 5) {
    *(undefined4 *)(iVar1 + 0x4c) = 1;
  }
  else if (*(int *)(iVar1 + 0x58) == 1) {
    iVar3 = fn_82281530(*(undefined4 *)(iVar1 + 0x14));
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar1 + 0x14);
      lVar5 = (ulonglong)*(uint *)(iVar1 + 0x48) + 4;
      if (*(int *)(iVar3 + 0x10) == 0) {
        if (*(int *)(iVar3 + 8) != 0) {
          fn_822819E0(iVar3,lVar5);
        }
      }
      else {
        fn_82281868(iVar3,lVar5,0);
      }
      *(undefined4 *)(iVar1 + 0x100) = 1;
    }
  }
  else {
    fn_82480FA0(iVar1);
  }
  return;
}

