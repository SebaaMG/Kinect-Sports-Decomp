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
extern int fn_8261FF40();
extern int fn_826200B0();


undefined4 fn_8261E8E8(undefined8 param_1,int *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = param_2[1];
  uVar5 = 0;
  if (uVar1 != 0) {
    iVar2 = *param_2;
    iVar6 = 0;
    do {
      if ((((*(uint *)(iVar6 + iVar2) & 2) != 0) || ((*(uint *)(iVar6 + iVar2) & 1) != 0)) &&
         ((uVar3 = *(uint *)(iVar6 + iVar2 + 4), (uVar3 & param_4) != 0 || ((uVar3 & 1) != 0)))) {
        iVar4 = *(int *)(iVar6 + iVar2 + 0xc);
        if (iVar4 == 0) {
          iVar4 = fn_8261FF40(param_1);
        }
        else {
          if ((iVar4 != 1) && (iVar4 != 3)) goto LAB_8261e98c;
          iVar4 = fn_826200B0(param_1);
        }
        if (iVar4 != 0) {
          return *(undefined4 *)(uVar5 * 0x18 + iVar2 + 0x10);
        }
      }
LAB_8261e98c:
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x18;
    } while (uVar5 < uVar1);
  }
  return 2;
}

