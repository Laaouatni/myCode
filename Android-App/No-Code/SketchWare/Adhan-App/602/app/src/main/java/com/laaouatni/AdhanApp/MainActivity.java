package com.laaouatni.AdhanApp;

import androidx.appcompat.app.AppCompatActivity;
import androidx.annotation.*;
import android.app.*;
import android.os.*;
import android.view.*;
import android.view.View.*;
import android.widget.*;
import android.content.*;
import android.content.res.*;
import android.graphics.*;
import android.graphics.drawable.*;
import android.media.*;
import android.net.*;
import android.text.*;
import android.text.style.*;
import android.util.*;
import android.webkit.*;
import android.animation.*;
import android.view.animation.*;
import java.io.*;
import java.util.*;
import java.util.regex.*;
import java.text.*;
import org.json.*;
import android.widget.ScrollView;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.Button;
import java.util.Timer;
import java.util.TimerTask;
import android.content.Intent;
import android.net.Uri;
import android.animation.ObjectAnimator;
import android.view.animation.LinearInterpolator;
import android.view.animation.AccelerateInterpolator;
import android.view.animation.DecelerateInterpolator;
import android.view.animation.AccelerateDecelerateInterpolator;
import android.view.animation.BounceInterpolator;
import android.view.View;
import android.graphics.Typeface;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.DialogFragment;

public class MainActivity extends AppCompatActivity {
	
	private Timer _timer = new Timer();
	
	private ScrollView ScroolBackground1;
	private LinearLayout linear1;
	private TextView logo_laaouatni_text;
	private Button ApriAdhanOrari;
	
	private TimerTask TempoAprireNewActivity;
	private Intent Aprire_OrariActivity = new Intent();
	private ObjectAnimator AnimazioneTestoLogo = new ObjectAnimator();
	private ObjectAnimator TrasparenzaAnimazione_ButtoneOrariAdhan = new ObjectAnimator();
	
	@Override
	protected void onCreate(Bundle _savedInstanceState) {
		super.onCreate(_savedInstanceState);
		setContentView(R.layout.main);
		initialize(_savedInstanceState);
		initializeLogic();
	}
	
	private void initialize(Bundle _savedInstanceState) {
		ScroolBackground1 = findViewById(R.id.ScroolBackground1);
		linear1 = findViewById(R.id.linear1);
		logo_laaouatni_text = findViewById(R.id.logo_laaouatni_text);
		ApriAdhanOrari = findViewById(R.id.ApriAdhanOrari);
		
		ApriAdhanOrari.setOnClickListener(new View.OnClickListener() {
			@Override
			public void onClick(View _view) {
				AnimazioneTestoLogo.setFloatValues((float)(0), (float)(200));
				AnimazioneTestoLogo.setInterpolator(new AccelerateInterpolator());
				AnimazioneTestoLogo.start();
			}
		});
	}
	
	private void initializeLogic() {
		ApriAdhanOrari.setVisibility(View.GONE);
		//inserire il font per il logo laaouatni.
		logo_laaouatni_text.setTextColor(0xFFFFFFFF);
		ScroolBackground1.setBackgroundColor(0xFF3F51B5);
		logo_laaouatni_text.setTypeface(Typeface.createFromAsset(getAssets(),"fonts/poppins_semi_bold.ttf"), 0);
		//animazione testo Intro
		AnimazioneTestoLogo.setTarget(logo_laaouatni_text);
		AnimazioneTestoLogo.setPropertyName("translationY");
		AnimazioneTestoLogo.setFloatValues((float)(-200), (float)(0));
		AnimazioneTestoLogo.setDuration((int)(3000));
		AnimazioneTestoLogo.setInterpolator(new DecelerateInterpolator());
		AnimazioneTestoLogo.start();
		//far apparire il buttone ma invisibilmente
		ApriAdhanOrari.setAlpha((float)(0));
		ApriAdhanOrari.setVisibility(View.VISIBLE);
		//faccio apparire il buttone, tramite un'animazione interessante!
		TrasparenzaAnimazione_ButtoneOrariAdhan.setTarget(ApriAdhanOrari);
		TrasparenzaAnimazione_ButtoneOrariAdhan.setPropertyName("alpha");
		TrasparenzaAnimazione_ButtoneOrariAdhan.setFloatValues((float)(0), (float)(0.6d));
		TrasparenzaAnimazione_ButtoneOrariAdhan.setDuration((int)(1000));
		TrasparenzaAnimazione_ButtoneOrariAdhan.setInterpolator(new DecelerateInterpolator());
		TrasparenzaAnimazione_ButtoneOrariAdhan.start();
	}
	
	
	@Deprecated
	public void showMessage(String _s) {
		Toast.makeText(getApplicationContext(), _s, Toast.LENGTH_SHORT).show();
	}
	
	@Deprecated
	public int getLocationX(View _v) {
		int _location[] = new int[2];
		_v.getLocationInWindow(_location);
		return _location[0];
	}
	
	@Deprecated
	public int getLocationY(View _v) {
		int _location[] = new int[2];
		_v.getLocationInWindow(_location);
		return _location[1];
	}
	
	@Deprecated
	public int getRandom(int _min, int _max) {
		Random random = new Random();
		return random.nextInt(_max - _min + 1) + _min;
	}
	
	@Deprecated
	public ArrayList<Double> getCheckedItemPositionsToArray(ListView _list) {
		ArrayList<Double> _result = new ArrayList<Double>();
		SparseBooleanArray _arr = _list.getCheckedItemPositions();
		for (int _iIdx = 0; _iIdx < _arr.size(); _iIdx++) {
			if (_arr.valueAt(_iIdx))
			_result.add((double)_arr.keyAt(_iIdx));
		}
		return _result;
	}
	
	@Deprecated
	public float getDip(int _input) {
		return TypedValue.applyDimension(TypedValue.COMPLEX_UNIT_DIP, _input, getResources().getDisplayMetrics());
	}
	
	@Deprecated
	public int getDisplayWidthPixels() {
		return getResources().getDisplayMetrics().widthPixels;
	}
	
	@Deprecated
	public int getDisplayHeightPixels() {
		return getResources().getDisplayMetrics().heightPixels;
	}
}