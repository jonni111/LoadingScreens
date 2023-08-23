class CfgPatches
{
	class ModName_ExpansionCustomMusic
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Sounds_Effects"
		};
	};
};
class CfgSoundShaders
{
	class MyMod_Music_1_SoundShader
	{
		samples[]=
		{
			
			{
				"LoadingScreen\CustomMusic\mymusic",
				1
			}
		};
		volume=0.70794576;
	};
};
class CfgSoundSets
{
	class MyMod_Music_1_SoundSet
	{
		soundShaders[]=
		{
			"MyMod_Music_1_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1;
		spatial=0;
	};
};
