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
extern int fn_82A3BD18();
extern int fn_82A3BE50();
extern int fn_82A3D9A8();
extern int fn_82A3DB90();
extern int fn_82A3E240();
extern int fn_82A3EA50();
extern int fn_82A3EAC0();
extern int fn_82A3F0A8();
extern int fn_82A3F198();
extern int fn_82F68CC0();


longlong fn_82A3BAA8(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar7 = 0;
  do {
    iVar2 = (int)param_2;
    do {
      if (iVar2 < 1) {
        uVar3 = param_1[0xbae];
        if (uVar3 == 0) {
          uVar3 = param_1[1];
        }
        fn_82A3EAC0(param_1,lVar7,((ulonglong)uVar3 - lVar7) + (ulonglong)*param_1);
        return lVar7;
      }
      if (param_1[0xbb5] == 1) {
        if (*(char *)((int)param_1 + 0x2eb6) != '\0') {
          *(undefined1 *)((int)param_1 + 0x2eb6) = 0;
          iVar2 = fn_82A3BE50(param_1,1);
          if (iVar2 == 0) {
            param_1[0xbaf] = 0;
          }
          else {
            iVar2 = fn_82A3BE50(param_1,0x10);
            uVar3 = fn_82A3BE50(param_1,0x10);
            param_1[0xbaf] = uVar3 | iVar2 << 0x10;
          }
        }
        if (param_1[0xbb4] == 3) {
          param_1[0xbb4] = 0;
          fn_82A3BD18(param_1);
        }
        uVar3 = fn_82A3BE50(param_1,3);
        param_1[0xbb4] = uVar3;
        iVar2 = fn_82A3BE50(param_1,8);
        iVar4 = fn_82A3BE50(param_1,8);
        iVar5 = fn_82A3BE50(param_1,8);
        uVar3 = iVar5 + (iVar2 * 0x100 + iVar4) * 0x100;
        param_1[0xbb2] = uVar3;
        param_1[0xbb3] = uVar3;
        if (param_1[0xbb4] == 2) {
          fn_82A3F198(param_1);
        }
        uVar3 = param_1[0xbb4];
        if ((uVar3 == 1) || (uVar3 == 2)) {
          fn_82F68CC0(param_1 + 0xac5,param_1 + 0x286,
                       ((ulonglong)*(byte *)((int)param_1 + 0x2eb5) + 0x20) * 8);
          fn_82F68CC0(param_1 + 0xb6d,param_1 + 0x32e,0xf9);
          fn_82A3F0A8(param_1);
        }
        else if ((uVar3 != 3) || (cVar6 = fn_82A3DB90(param_1), cVar6 == '\0')) {
          return -1;
        }
        param_1[0xbb5] = 2;
      }
      for (; (iVar2 = (int)param_2, 0 < (int)param_1[0xbb3] && (0 < iVar2));
          param_2 = param_2 - uVar8) {
        uVar8 = (ulonglong)param_1[0xbb3];
        if (iVar2 <= (int)param_1[0xbb3]) {
          uVar8 = param_2;
        }
        if ((uVar8 & 0xffffffff) == 0) {
          return -1;
        }
        uVar3 = param_1[0xbb4];
        uVar1 = param_1[0xbae];
        if (uVar3 == 2) {
          iVar2 = fn_82A3EA50(param_1,uVar1,uVar8);
        }
        else if (uVar3 == 1) {
          iVar2 = fn_82A3E240(param_1,uVar1,uVar8);
        }
        else if (uVar3 == 3) {
          iVar2 = fn_82A3D9A8(param_1,uVar1,uVar8);
        }
        else {
          iVar2 = -1;
        }
        if (iVar2 != 0) {
          return -1;
        }
        lVar7 = uVar8 + lVar7;
        param_1[0xbb3] = param_1[0xbb3] - (int)uVar8;
      }
      if (param_1[0xbb3] == 0) {
        param_1[0xbb5] = 1;
      }
    } while (iVar2 != 0);
    fn_82A3BD18(param_1);
  } while( true );
}

