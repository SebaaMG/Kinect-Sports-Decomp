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
extern int fn_82AA66A8();
extern int fn_82ABDAA0();
extern int fn_82AD1400();
extern int fn_82ADD198();


int fn_82AD5AA8(undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  char cVar4;
  int iVar3;
  uint uVar5;
  int iVar6;
  
  iVar2 = fn_82ADD198(param_1,param_3);
  uVar5 = *(uint *)(param_2 + 0x1c);
  uVar1 = *(uint *)((param_2 & 0xfffffffe) + 0x24);
  if ((uVar1 & 1) != 0) goto LAB_82ad5bb8;
  do {
    iVar6 = (uVar1 & 0xfffffffe) - 0x28;
joined_r0x82ad5aec:
    for (; iVar6 != 0; iVar6 = (*(uint *)(iVar6 + 0x24) & 0xfffffffe) - 0x28) {
      cVar4 = fn_82ABDAA0(iVar6);
      if (cVar4 != '\0') {
        if ((*(uint *)(iVar6 + 8) >> 0x17 & 1) != 0) {
          cVar4 = fn_82ABDAA0(iVar6);
          if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          iVar3 = fn_82ADD198(param_1,*(undefined2 *)(iVar6 + 0x12));
          if (iVar3 == iVar2) {
            return iVar6;
          }
        }
        iVar3 = fn_82AD1400(param_1,iVar6);
        if ((iVar3 != 0) && ((*(uint *)(iVar3 + 8) >> 0x17 & 1) != 0)) {
          cVar4 = fn_82ABDAA0(iVar3);
          if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          iVar3 = fn_82ADD198(param_1,*(undefined2 *)(iVar3 + 0x12));
          if (iVar3 == iVar2) {
            return iVar6;
          }
        }
      }
      if ((*(uint *)(iVar6 + 0x24) & 1) != 0) break;
    }
    if ((*(uint *)(uVar5 & 0xfffffffe) & 1) != 0) {
LAB_82ad5be4:
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    uVar1 = *(uint *)(uVar5 & 0xfffffffe) & 0xfffffffe;
    uVar5 = uVar1 - 4;
    if (uVar5 == 0) goto LAB_82ad5be4;
    if ((*(uint *)(uVar1 + 0x18) & 1) != 0) {
LAB_82ad5bb8:
      iVar6 = 0;
      goto joined_r0x82ad5aec;
    }
    uVar1 = *(uint *)(uVar1 + 0x14);
  } while( true );
}

