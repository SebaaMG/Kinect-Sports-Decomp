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
extern int fn_826824B0();
extern int fn_826959C8();
extern int fn_82696610();
extern int fn_82696728();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


ulonglong fn_82696958(char *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  uint uStack_40;
  int iStack_3c;
  byte bStack_38;
  byte abStack_30 [24];
  
  cVar3 = *param_1;
  if (cVar3 == '\x06') {
    uVar2 = (ulonglong)*(uint *)(param_1 + 4);
  }
  else {
    if (cVar3 == '\b') {
      if ((ulonglong)*(uint *)(param_1 + 4) != 0) {
        return (ulonglong)*(uint *)(param_1 + 4);
      }
    }
    else if (cVar3 == '\t') {
      iVar1 = *(int *)(param_2 + 0x74);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        abStack_30[0] = 0;
        cVar3 = fn_82696610(param_1,param_2,iVar1 + 0x68,abStack_30);
        if (cVar3 != '\0') {
          uVar2 = fn_82696958(abStack_30,param_2);
          if (4 < abStack_30[0]) {
            fn_826959C8(abStack_30);
          }
          fn_8267C498(iVar1);
          return uVar2;
        }
        if (4 < abStack_30[0]) {
          fn_826959C8(abStack_30);
        }
        fn_8267C498(iVar1);
      }
    }
    else if (cVar3 == '\v') {
      fn_82696728(&uStack_40,param_1,param_2);
      uVar2 = (ulonglong)uStack_40;
      if (uVar2 != 0) {
        if ((bStack_38 & 2) == 0) {
          fn_826824B0();
        }
        uStack_40 = 0;
        if ((bStack_38 & 1) != 0) {
          return uVar2;
        }
        if (iStack_3c == 0) {
          return uVar2;
        }
        fn_826824B0();
        return uVar2;
      }
      uStack_40 = 0;
      if (((bStack_38 & 1) == 0) && (iStack_3c != 0)) {
        fn_826824B0();
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

