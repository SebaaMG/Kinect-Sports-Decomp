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
extern int fn_82ABDCF8();
extern int fn_82F6A3F0();


void fn_82AE4E18(int param_1,int param_2,int param_3,int *param_4,uint *param_5,
                  undefined1 *param_6)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  char *apcStack_40 [16];
  
  pbVar5 = *(byte **)(param_2 + 0x18);
  bVar2 = *pbVar5;
  if (bVar2 < 99) {
    if ((bVar2 == 0x62) || (bVar2 == 0x42)) {
      if ((param_3 != 7) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x119d,pbVar5);
      }
      param_3 = 0;
      uVar3 = -(uint)(((ulonglong)*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffffffffffff0000) &
              0x80;
LAB_82ae4fc8:
      uVar6 = 0x100;
      goto LAB_82ae4fcc;
    }
    if (bVar2 == 0x43) goto LAB_82ae4fa4;
    if (bVar2 == 0x49) goto LAB_82ae4f5c;
    if (bVar2 == 0x53) goto LAB_82ae4f38;
    bVar1 = bVar2 == 0x56;
  }
  else {
    if (bVar2 == 99) {
LAB_82ae4fa4:
      if ((param_3 != 7) && (param_3 != 2)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x119d,pbVar5);
      }
      param_3 = 2;
      uVar3 = 0;
      goto LAB_82ae4fc8;
    }
    if (bVar2 == 0x69) {
LAB_82ae4f5c:
      if ((param_3 != 7) && (param_3 != 1)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x119d,pbVar5);
      }
      param_3 = 1;
      uVar6 = 0x20;
      uVar3 = -(uint)(((ulonglong)*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffffffffffff0000) &
              0x10;
      goto LAB_82ae4fcc;
    }
    if (bVar2 == 0x73) {
LAB_82ae4f38:
      if (param_3 != 3) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x119d,pbVar5);
      }
      uVar3 = fn_82ABDCF8();
      uVar6 = 0x20;
      goto LAB_82ae4fcc;
    }
    bVar1 = bVar2 == 0x76;
  }
  if (!bVar1) {
    if (param_3 != 7) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x119d,pbVar5);
    }
    uVar3 = 0x100;
    uVar6 = 0xffffffff;
LAB_82ae4fcc:
    iVar4 = fn_82F6A3F0(pbVar5 + 1,apcStack_40,10);
    if (*apcStack_40[0] != '\0') {
      uVar3 = 0x100;
    }
    if (uVar6 <= iVar4 + uVar3) {
      uVar3 = 0x100;
    }
    uVar3 = iVar4 + uVar3;
    if (0xff < uVar3) {
      uVar3 = 0x100;
    }
    *param_5 = uVar3;
    *param_4 = param_3;
    return;
  }
  if (param_3 == 3) {
    if ((pbVar5[1] == 0x66) || (pbVar5[1] == 0x46)) {
      uVar3 = 0;
      *param_6 = 1;
      uVar6 = 0x60;
      pbVar5 = pbVar5 + 1;
      goto LAB_82ae4fcc;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x119d,pbVar5);
}

