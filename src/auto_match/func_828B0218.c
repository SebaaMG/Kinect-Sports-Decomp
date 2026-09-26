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
extern int fn_825089A0();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_8289EEE0();
extern int fn_828ACC50();
extern int fn_828ACCB0();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern int fn_828BE158();
extern int fn_828DA568();


/* WARNING: Removing unreachable block (ram,0x828b0180) */

void fn_828B0218(int param_1,int param_2)

{
  char cVar6;
  int *piVar5;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_2 + 0x26) == '\0') {
    cVar6 = fn_828ACCE8(*(undefined4 *)(param_1 + 8));
    if ((((cVar6 != '\0') || (cVar6 = fn_828ACCB0(*(undefined4 *)(param_1 + 8)), cVar6 != '\0'))
        && (cVar6 = fn_828ACC50(*(undefined4 *)(param_1 + 8)), cVar6 == '\0')) &&
       (cVar6 = fn_828AD740(*(undefined4 *)(param_1 + 8)), cVar6 == '\0')) {
      piVar5 = (int *)fn_825089A0();
      uVar1 = (**(code **)(*piVar5 + 0xc))();
      uVar2 = fn_8265C9E0(0xb0);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_828DA568(uVar2,*(undefined4 *)(param_1 + 8));
      }
      fn_82886518(uVar3,0xffffffffffffffff,0xffffffffffffffff);
      fn_8289EEE0(*(undefined4 *)(param_1 + 8));
      uVar4 = fn_82897BD0();
      fn_828BE158(*(undefined4 *)(param_1 + 8),uVar3,uVar4,0);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
    }
    return;
  }
  return;
}

