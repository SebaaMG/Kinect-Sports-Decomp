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
extern char cRam832633c8;
extern char cRam832633ca;
extern int fn_82A1BB18();
extern int fn_82F63BA0();
extern int fn_82F63C78();
extern int fn_82F664B0();
extern int fn_82F68240();
extern int fn_82F686F8();
extern int fn_82F69A80();
extern int fn_82F6D050();
extern int fn_82F6D3DC();
extern int fn_82F6E2F0();
extern int fn_82F71B90();
extern int fn_82F71CD0();
extern int fn_82F7B940();
extern int fn_82F7C590();
extern int fn_82F84100();
extern unsigned int lbl_832636E4;
extern unsigned int uRam832633cb;


int fn_82F6D120(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar2;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int aiStack_60 [4];
  int iVar8;
  
  iVar8 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)fn_82F68240();
    *puVar3 = 0x16;
    fn_82F63BA0();
    return 0x16;
  }
  *param_1 = 0;
  iVar4 = fn_82F71B90(2);
  if (iVar4 == 0) {
    piVar5 = (int *)fn_82F68240();
    return *piVar5;
  }
  fn_82F71CD0(2);
  if (cRam832633c8 == '\0') {
    iVar4 = fn_82F664B0(0xffffffff832633c8,0x14,0xffffffff82168390);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63C78(0,0,0,0,0);
    }
    puVar7 = (undefined1 *)0x832633cb;
    if ((cRam832633ca != '\\') && (cRam832633ca != '/')) {
      puVar7 = (undefined1 *)0x832633cc;
      uRam832633cb = 0x5c;
    }
    *puVar7 = 0x74;
    uVar2 = fn_82A1BB18();
    iVar4 = fn_82F686F8(uVar2,puVar7 + 1,-0x7cd9cc24 - (int)(puVar7 + 1),0x20);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63C78(0,0,0,0,0);
    }
    iVar4 = fn_82F69A80(0xffffffff832633c8,0x14,0xffffffff821c7f2c);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63C78(0,0,0,0,0);
    }
  }
  else {
    iVar4 = fn_82F6D050(0xffffffff832633c8,0x14,0x7fffffff);
    if (iVar4 != 0) goto LAB_82f6d390;
  }
  puVar3 = (undefined4 *)fn_82F7B940();
  if (puVar3 == (undefined4 *)0x0) {
    iVar8 = 0x18;
  }
  else {
    puVar6 = (undefined4 *)fn_82F68240();
    uVar1 = *puVar6;
    puVar6 = (undefined4 *)fn_82F68240();
    *puVar6 = 0;
    do {
      iVar4 = fn_82F84100(aiStack_60,0xffffffff832633c8,0x8542,param_2,0x180);
      if (iVar4 != 0x11) break;
      iVar4 = fn_82F6D050(0xffffffff832633c8,0x14,0x7fffffff);
    } while (iVar4 == 0);
    piVar5 = (int *)fn_82F68240();
    if (*piVar5 == 0) {
      puVar6 = (undefined4 *)fn_82F68240();
      *puVar6 = uVar1;
    }
    if (aiStack_60[0] != -1) {
      iVar4 = fn_82F6E2F0(0xffffffff832633c8);
      puVar3[7] = iVar4;
      if (iVar4 == 0) {
        fn_82F7C590(aiStack_60[0]);
      }
      else {
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[2] = 0;
        puVar3[3] = lbl_832636E4 | 0x80;
        puVar3[4] = aiStack_60[0];
        *param_1 = puVar3;
      }
    }
  }
LAB_82f6d390:
  fn_82F6D3DC();
  if (iVar8 != 0) {
    piVar5 = (int *)fn_82F68240();
    *piVar5 = iVar8;
  }
  return iVar8;
}

