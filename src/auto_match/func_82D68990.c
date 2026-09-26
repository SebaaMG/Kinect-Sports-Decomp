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
extern int fn_82D78938();
extern V16 vectorMergeHighWord();
extern void *memcpy(void *, const void *, unsigned int);


undefined4 fn_82D68990(undefined4 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined1 in_vs32 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_00010040;
  undefined4 in_register_00010044;
  undefined4 in_register_00010048;
  undefined4 in_vr4;
  
  iVar3 = (int)param_2;
  puVar1 = (undefined4 *)(iVar3 + 0x50U & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + iVar3 + 0xc0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;{ V16 _vt0 = vectorMergeHighWord(in_vs41,in_vs39); memcpy(auVar4, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs40,in_vs32); memcpy(auVar5, &_vt1, 16); }
  vectorMergeHighWord(auVar4,auVar5);
  puVar1 = (undefined4 *)(iVar3 + 0xd0U & 0xfffffff0);
  *puVar1 = in_register_00010040;
  puVar1[1] = in_register_00010044;
  puVar1[2] = in_register_00010048;
  puVar1[3] = in_vr4;
  iVar3 = fn_82D78938(param_2,param_2 + 0x80);
  *(bool *)param_1 = iVar3 == 0;
  return param_1;
}

