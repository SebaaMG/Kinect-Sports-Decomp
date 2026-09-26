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
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FF8938();
extern int fn_82FF8988();
extern int fn_82FFE0F0();
extern int fn_82FFE158();
extern unsigned int lbl_831BC768;
extern unsigned int uStack_7c;
extern unsigned int uStack_8c;


undefined8 fn_82FFA358(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte abStack_90 [4];
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [4];
  uint uStack_7c;
  
  uVar6 = 1;
  do {
    do {
      if ((param_2 == 0) || ((int)uVar6 != 1)) {
        return uVar6;
      }
      lVar5 = param_1 + 4;
      uVar6 = fn_82FF8938(lVar5,auStack_80,8);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      iVar4 = param_2 + -8;
      uVar3 = 0;
      param_2 = iVar4;
    } while (uStack_7c == 0);
    while (uVar6 = fn_82FF8938(lVar5,&uStack_8c,4), param_2 = iVar4, (int)uVar6 == 1) {
      uVar6 = fn_82FF8938(lVar5,abStack_90,1);
      param_2 = iVar4 + -4;
      if ((int)uVar6 != 1) break;
      iVar4 = iVar4 + -5;
      iVar1 = fn_82FFE0F0(param_1 + 0x41c,uStack_8c);
      if (iVar1 == 0) {
        iVar1 = fn_82FA5060(lbl_831BC768,(ulonglong)abStack_90[0] + 5);
        if (iVar1 == 0) {
          uVar6 = 0x34;
          param_2 = iVar4;
        }
        else {
          *(undefined1 *)((uint)abStack_90[0] + iVar1) = 0x2e;
          *(undefined1 *)((uint)abStack_90[0] + iVar1 + 1) = 0x62;
          *(undefined1 *)((uint)abStack_90[0] + iVar1 + 2) = 0x6e;
          *(undefined1 *)((uint)abStack_90[0] + iVar1 + 3) = 0x6b;
          *(undefined1 *)((uint)abStack_90[0] + iVar1 + 4) = 0;
          uVar6 = fn_82FF8938(lVar5,iVar1,abStack_90[0]);
          if ((int)uVar6 == 1) {
            iVar4 = iVar4 - (uint)abStack_90[0];
            piVar2 = (int *)fn_82FFE158(param_1 + 0x41c,uStack_8c);
            if (piVar2 != (int *)0x0) {
              *piVar2 = iVar1;
              goto LAB_82ffa4d0;
            }
            uVar6 = 0x34;
          }
          fn_82FA5190(lbl_831BC768,iVar1);
          param_2 = iVar4;
        }
        break;
      }
      fn_82FF8988(lVar5,abStack_90[0],auStack_88);
      iVar4 = iVar4 - (uint)abStack_90[0];
LAB_82ffa4d0:
      uVar3 = uVar3 + 1;
      param_2 = iVar4;
      if (uStack_7c <= uVar3) break;
    }
  } while( true );
}

