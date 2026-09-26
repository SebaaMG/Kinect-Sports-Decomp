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
extern int fn_826405E0();
extern int fn_82677F48();
extern int fn_82678428();


void fn_82678668(int param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  longlong param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((((*(char *)(param_1 + 0x10) != '\0') && (*(int *)(param_1 + 0x1bc) != 0)) &&
      (*(int *)(param_1 + 0x1c0) != 0)) && (*(int *)(param_1 + 0x1c8) != -1)) {
    iVar3 = 4;
    if (*(int *)(param_1 + 0x2220) == 3) {
      if (*(int *)(param_1 + 0x1c4) == 3) {
        iVar3 = 8;
      }
      else if (*(int *)(param_1 + 0x1c4) == 4) {
        iVar3 = 0xc;
      }
    }
    else {
      iVar3 = 4;
    }
    fn_82677F48(param_1 + 0x2220,param_1);
    fn_82678428(param_1,param_1 + 0x11c);
    iVar2 = 2;
    if (*(int *)(param_1 + 0x1c8) != 1) {
      iVar2 = 4;
    }
    iVar1 = (int)param_6;
    lVar4 = (longlong)iVar2 * (longlong)param_5 + (ulonglong)*(uint *)(param_1 + 0x1c0);
    *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + iVar1;
    *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + iVar1;
    if (0x5555 < iVar1) {
      lVar5 = (param_6 - 0x5556U & 0xffffffff) / 0x5555 + 1;
      param_6 = param_6 + lVar5 * -0x5555;
      do {
        fn_826405E0(*(undefined4 *)(param_1 + 0xd8),4,param_3,param_4,0xffff,lVar4,
                          *(undefined4 *)(param_1 + 0x1c8),
                          (longlong)iVar3 * (longlong)param_2 +
                          (ulonglong)*(uint *)(param_1 + 0x1bc));
        lVar5 = lVar5 + -1;
        lVar4 = (longlong)iVar2 * 0xffff + lVar4;
        *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
        *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
      } while (lVar5 != 0);
    }
    if (0 < (int)param_6) {
      fn_826405E0(*(undefined4 *)(param_1 + 0xd8),4,param_3,param_4,param_6 * 3,lVar4,
                        *(undefined4 *)(param_1 + 0x1c8),
                        (longlong)iVar3 * (longlong)param_2 + (ulonglong)*(uint *)(param_1 + 0x1bc))
      ;
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
      *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
    }
  }
  return;
}

