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
extern int fn_82D7E470();
extern int fn_82F68240();
extern int fn_82F6AB08();
extern int fn_82F7C468();
extern int fn_82F7C9A0();
extern int fn_82F85678();
extern int fn_82F857F8();
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;
extern unsigned int stack0x00000014;
extern unsigned int uStack00000014;


ulonglong fn_82F70748(uint param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar2;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar9;
  uint uStack00000014;
  
  uStack00000014 = param_1;
  uVar1 = fn_82F7C468(param_2);
  uVar8 = param_2[3];
  if ((uVar8 & 0x82) == 0) {
    puVar3 = (undefined4 *)fn_82F68240();
    uVar6 = 9;
LAB_82f70780:
    *puVar3 = uVar6;
  }
  else {
    if ((uVar8 & 0x40) != 0) {
      puVar3 = (undefined4 *)fn_82F68240();
      uVar6 = 0x22;
      goto LAB_82f70780;
    }
    if ((uVar8 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar8 & 0x10) == 0) goto LAB_82f7078c;
      param_2[3] = uVar8 & 0xfffffffe;
      *param_2 = param_2[2];
    }
    uVar8 = param_2[3];
    iVar5 = 0;
    param_2[1] = 0;
    param_2[3] = uVar8 & 0xffffffef | 2;
    if (((uVar8 & 0x10c) == 0) &&
       (((iVar4 = fn_82F6AB08(), param_2 != (uint *)(iVar4 + 0x20) &&
         (iVar4 = fn_82F6AB08(), param_2 != (uint *)(iVar4 + 0x40))) ||
        (iVar4 = fn_82D7E470(uVar1), iVar4 == 0)))) {
      fn_82F857F8(param_2);
    }
    if ((param_2[3] & 0x108) == 0) {
      lVar9 = 1;
      iVar5 = fn_82F7C9A0(uVar1,&stack0x00000014,1);
LAB_82f70904:
      if (iVar5 == (int)lVar9) {
        return (ulonglong)uStack00000014 & 0xff;
      }
    }
    else {
      uVar8 = param_2[2];
      lVar9 = (ulonglong)*param_2 - (ulonglong)uVar8;
      param_2[1] = param_2[6] - 1;
      *param_2 = uVar8 + 1;
      if (0 < lVar9) {
        iVar5 = fn_82F7C9A0(uVar1,(ulonglong)uVar8,lVar9);
LAB_82f708dc:
        *(char *)param_2[2] = (char)uStack00000014;
        goto LAB_82f70904;
      }
      uVar8 = (uint)uVar1;
      if ((uVar8 == 0xffffffff) || (uVar8 == 0xfffffffe)) {
        puVar7 = &lbl_831BBF60;
      }
      else {
        puVar7 = (undefined *)((&lbl_8329F620)[(int)uVar8 >> 5] + (uVar8 & 0x1f) * 0x48);
      }
      if (((puVar7[4] & 0x20) == 0) || (lVar2 = fn_82F85678(uVar1,0,2), lVar2 != -1))
      goto LAB_82f708dc;
    }
  }
  uVar8 = param_2[3];
LAB_82f7078c:
  param_2[3] = uVar8 | 0x20;
  return 0xffffffffffffffff;
}

