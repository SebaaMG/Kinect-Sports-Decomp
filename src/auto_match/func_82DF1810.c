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


void fn_82DF1810(char *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar2 = 0;
    if ((param_3 & 0xff) != 0) {
      if ((param_3 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)(param_2 + 0x34);
      }
      if ((param_3 & 2) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(param_2 + 0x38);
      }
      if ((param_3 & 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(param_2 + 0x3c);
      }
      if ((param_3 & 8) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(param_2 + 0x40);
      }
      if ((param_3 & 0x10) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(param_2 + 0x44);
      }
      if ((param_3 & 0x20) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)(param_2 + 0x48);
      }
      if ((param_3 & 0x40) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(param_2 + 0x4c);
      }
      if ((param_3 & 0x80) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(param_2 + 0x50);
      }
      uVar2 = uVar2 | uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1;
    }
    if ((param_3 & 0xff00) != 0) {
      if ((param_3 & 0x100) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)(param_2 + 0x54);
      }
      if ((param_3 & 0x200) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(param_2 + 0x58);
      }
      if ((param_3 & 0x400) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(param_2 + 0x5c);
      }
      if ((param_3 & 0x800) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(param_2 + 0x60);
      }
      if ((param_3 & 0x1000) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(param_2 + 100);
      }
      if ((param_3 & 0x2000) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)(param_2 + 0x68);
      }
      if ((param_3 & 0x4000) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(param_2 + 0x6c);
      }
      if ((param_3 & 0x8000) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(uint *)(param_2 + 0x70);
      }
      uVar2 = uVar9 | uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 | uVar2;
    }
    if ((param_3 & 0xff0000) != 0) {
      if ((param_3 & 0x10000) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)(param_2 + 0x74);
      }
      if ((param_3 & 0x20000) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(param_2 + 0x78);
      }
      if ((param_3 & 0x40000) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(param_2 + 0x7c);
      }
      if ((param_3 & 0x80000) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(param_2 + 0x80);
      }
      if ((param_3 & 0x100000) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(param_2 + 0x84);
      }
      if ((param_3 & 0x200000) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)(param_2 + 0x88);
      }
      if ((param_3 & 0x400000) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(param_2 + 0x8c);
      }
      if ((param_3 & 0x800000) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(uint *)(param_2 + 0x90);
      }
      uVar2 = uVar9 | uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 | uVar2;
    }
    if ((param_3 & 0xff000000) != 0) {
      if ((param_3 & 0x1000000) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)(param_2 + 0x94);
      }
      if ((param_3 & 0x2000000) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(param_2 + 0x98);
      }
      if ((param_3 & 0x4000000) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(param_2 + 0x9c);
      }
      if ((param_3 & 0x8000000) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(param_2 + 0xa0);
      }
      if ((param_3 & 0x10000000) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(param_2 + 0xa4);
      }
      if ((param_3 & 0x20000000) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)(param_2 + 0xa8);
      }
      if ((param_3 & 0x40000000) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(param_2 + 0xac);
      }
      if ((param_3 & 0x80000000) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(uint *)(param_2 + 0xb0);
      }
      uVar2 = uVar9 | uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 | uVar2;
    }
    *param_1 = '\x01' - ((uVar2 & param_4) == 0);
    return;
  }
  *param_1 = *(char *)(param_2 + 0x30);
  return;
}

